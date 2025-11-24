#include <iostream>

using namespace std;

struct student{
    string name;
    string sname;
    string id;
    double gpa;

    student(){
        name = "X";
        sname = "Y";
        id = "Z";
        gpa = 4.0;
    }

    student(string name, string sname, string id, double gpa){
        this->name = name;
        this->sname = sname;
        this->id = id;
        this->gpa = gpa;
    }

    void printInfo(){
        cout << name << " " << sname << " " << id << " " << gpa << endl;
    }

};

int main(){

    student * s1 = new student("A", "B", "123", 4.0);
    s1->printInfo();

    student * s2 = new student("A2", "B2", "124", 3.0);
    s2->printInfo();

    student s3;
    s3.printInfo(); 

    return 0;
}