#include <iostream>

using namespace std;

struct student{
    string name;
    string sname;
    string id;
    double gpa;

    student(){
        name = "A";
        sname = "B";
        id = "123";
        gpa = 4.0;
    }

    void printInfo(){
        cout << name << " " << sname << " " << id << " " << gpa << endl;
    }
};

int main(){

    student * s1 = new student();
    s1->printInfo();

    student * s2 = new student();
    s2->printInfo();

    return 0;
}