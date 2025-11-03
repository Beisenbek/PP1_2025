#include <iostream>

using namespace std;

void printPersonInfo(pair<string, pair<string, string > > fn){
     cout << fn.first << " " << fn.second.first << " " << fn.second.second << endl;
}

int main(){

    printPersonInfo(make_pair("John", make_pair("Smith", "Kemelevich")));
    printPersonInfo(make_pair("A", make_pair("B", "C")));

    return 0;
}