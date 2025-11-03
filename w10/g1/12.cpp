#include <iostream>

using namespace std;

void printPersonInfo(pair<string, string> fn){
     cout << fn.first << " " << fn.second << endl;
}

int main(){

    printPersonInfo(make_pair("John", "Smith"));
    printPersonInfo(make_pair("A", "B"));

    vector<pair<string, string> > v;

    v.push_back(make_pair("John", "Smith"));

    return 0;
}