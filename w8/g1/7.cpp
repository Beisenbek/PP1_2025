#include <iostream>
#include <sstream>

using namespace std;

int main(){

    stringstream ss;

    ss << "test" << " " << "test2";

    string t, t2;

    ss >> t >> t2;

    cout << t << " " << t2;

    return 0;
}