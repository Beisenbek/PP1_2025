#include <iostream>

using namespace std;

void print(string fname, string sname){
    cout << fname << " " << sname << endl;
}

void print2(pair<string, string> p){
    cout << p.first << " " << p.second << endl;
}

int main(){

    print("Af", "As");
    print2(make_pair("Af", "As"));

    return 0;
}

