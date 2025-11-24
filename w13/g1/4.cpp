#include <iostream>

using namespace std;

void print(string fname, string sname, double gpa){
    cout << fname << " " << sname << " " << gpa <<   endl;
}

void print2(pair<string, pair<string, double> > p){
    cout << p.first << " " << p.second.first << " " << p.second.second  << endl;
}

int main(){

    print("Af", "As", 4.0);
    print2(make_pair("Af", make_pair("As", 4.0)));

    return 0;
}

