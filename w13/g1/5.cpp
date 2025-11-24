#include <iostream>

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

    student s1;

    s1.name = "A";
    s1.sname = "A";
    s1.gpa = 4.0;

    print3(s1);
    

    return 0;
}

