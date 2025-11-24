#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
    string name;
    string sname;
    double gpa;
    student(string name, string sname, double gpa){
        this->name = name;
        this->sname = sname;
        this->gpa = gpa;
    }
    void print_information(){
        cout << name << " " << sname << " " << gpa << endl;
    }
};



bool f(student s1, student s2){
    if(s1.name > s2.name) return false;
    return true;
}

bool f2(student s1, student s2){
    if(s1.name < s2.name) return false;
    return true;
}

bool f3(student s1, student s2){
    if(s1.gpa < s2.gpa) return false;
    return true;
}

int main(){

    vector<student> students;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        string a,b;
        double c;
        cin >> a >> b >> c;
        student s(a, b, c);
        students.push_back(s);
    }

    sort(students.begin(), students.end(), f3);

    for(int i = 0; i < n; ++i){
        students[i].print_information();
    }

    return 0;
}

