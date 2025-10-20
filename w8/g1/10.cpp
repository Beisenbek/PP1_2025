#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    stringstream ss;

    string s;

    while(cin >> s){
        ss <<  s << " ";
    }

    cout << ss.str();

    return 0;
}