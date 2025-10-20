#include <iostream>

using namespace std;

int main(){

    string s;
    
    string fname;
    cin >> fname;

    freopen(fname.c_str(),"r",stdin);

    getline(cin, s);
    cout << s;

    return 0;
}