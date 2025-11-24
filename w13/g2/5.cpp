#include <iostream>
#include <vector>

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

int main(){

    int n;
    cin >> n;

    vector<student> v(n);

    for(int i = 0; i < n; ++i){
        v[i].getInfo();
    }

    for(int i = 0; i <= n - 2; ++i){
        for(int j = i + 1; j <= n - 1; ++j){
            if(v[i].gpa < v[j].gpa){
                swap(v[i], v[j]);
            }
        }
    }


    for(int i = 0; i < n; ++i){
        v[i].printInfo();
    }

    return 0;
}