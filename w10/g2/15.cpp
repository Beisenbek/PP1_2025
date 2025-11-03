#include <iostream>

using namespace std;

void print(pair<string, pair<string, string> > fio){
    cout << fio.first << " " << fio.second.first <<  " " << fio.second.second << endl;
}

int main(){
    print(make_pair("John", make_pair("Smith", "Kemelevich")));
    print(make_pair("A", make_pair("B", "C")));
    return 0;
}

