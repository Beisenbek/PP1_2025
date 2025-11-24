#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
    string name;
    string sname;
    double gpa;
};

void print3(student s){
    cout << s.name << " " << s.sname << " " << s.gpa << endl;
}

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
    student s;

    for(int i = 0; i < n; ++i){
        cin >> s.name >> s.sname >> s.gpa;
        students.push_back(s);
    }

    sort(students.begin(), students.end(), f3);

    for(int i = 0; i < n; ++i){
        print3(students[i]);
    }

    return 0;
}

