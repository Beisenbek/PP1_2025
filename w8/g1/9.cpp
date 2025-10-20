#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    stringstream ss;

    string s;
    cin >> s;

    int x;

    ss << s;
    ss >> x;

    cout << sqrt(x);

    return 0;
}