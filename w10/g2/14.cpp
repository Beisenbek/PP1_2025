#include <iostream>

using namespace std;


int main(){

    pair<string, string> fi;

    fi = make_pair("John", "Smith");

    cout << fi.first << " " << fi.second;

    return 0;
}

