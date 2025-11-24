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

    student s1;
    s1.printInfo();

    return 0;
}