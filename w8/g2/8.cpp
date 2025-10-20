#include <iostream>
#include <sstream>

using namespace std;

int main(){

    stringstream ss;

    ss << "test" << " " << "test2";

    string str;

    ss >> str;

    cout << str;

    ss >> str;

    cout << str;

    
    return 0;
}