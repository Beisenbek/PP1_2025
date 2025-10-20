#include <iostream>
#include <sstream>

using namespace std;

int main(){

    stringstream ss;

    ss << "test";

    string str;

    ss >> str;

    cout << str;

    
    return 0;
}