#include <iostream>
#include <vector>
#include <algorithm>
#include "student/student.h"

using namespace std;

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

    sort(students.begin(), students.end(), compare_by_gpa_desc);

    for(int i = 0; i < n; ++i){
        students[i].print_information();
    }

    return 0;
}

