#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

int main(){

    string str = "49";

    stringstream ss;
    ss << str;

    int x;
    ss >> x;

    cout << sqrt(x);
    
    return 0;
}