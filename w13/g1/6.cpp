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

int main(){

    vector<student> students;

    int n;
    cin >> n;
    student s;

    for(int i = 0; i < n; ++i){
        cin >> s.name >> s.sname >> s.gpa;
        students.push_back(s);
    }

    for(int i = 0 ;i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            if(students[i].name > students[j].name){
                swap(students[i], students[j]);
            }
        }
    }

    //sort(students.begin(), students.end());

    for(int i = 0; i < n; ++i){
        print3(students[i]);
    }

    return 0;
}

