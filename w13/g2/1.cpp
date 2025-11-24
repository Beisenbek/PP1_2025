#include <iostream>

using namespace std;

struct student{
    string name;
    string sname;
    string id;
    double gpa;

    void printInfo(){
        cout << name << " " << sname << " " << id << " " << gpa << endl;
    }
};

int main(){

    student s1;
    s1.name = "A";
    s1.sname = "B";
    s1.id = "09FSXX019";
    s1.gpa = 3.5;


    s1.printInfo();

    return 0;
}