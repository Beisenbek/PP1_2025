#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
    string name;
    string sname;
    double gpa;
    student(){
        name = "AAA";
        sname = "AAA";
        gpa = 2.0;
    }
    void print_information(){
        cout << name << " " << sname << " " << gpa << endl;
    }
};


int main(){

    student s;

    s.print_information();
    
    return 0;

}

