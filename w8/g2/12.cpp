#include <iostream>
using namespace std;

int main(){

    string fname;
    
    cin >> fname;

    freopen(fname.c_str(), "r", stdin);

    string str;
    cin >> str;
    cout << str;

    return 0;
}