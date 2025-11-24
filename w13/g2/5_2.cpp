#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
    string name;
    string sname;
    string id;
    double gpa;

    void getInfo(){
        cin >> name >> sname >> id >> gpa;
    }

    void printInfo(){
        cout << name << " " << sname << " " << id << " " << gpa << endl;
    }

};

bool comp_by_gpa_desc(student s1, student s2){
    if(s1.gpa < s2.gpa) return false;
    return true;
}

bool comp_by_name_desc(student s1, student s2){
    if(s1.name < s2.name) return false;
    return true;
}

bool comp_by_name_asc(student s1, student s2){
    if(s1.name > s2.name) return false;
    return true;
}
 
 
int main(){

    int n;
    cin >> n;

    vector<student> v(n);

    for(int i = 0; i < n; ++i){
        v[i].getInfo();
    }

    sort(v.begin(), v.end(), comp_by_gpa_desc);

    for(int i = 0; i < n; ++i){
        v[i].printInfo();
    }

    return 0;
}