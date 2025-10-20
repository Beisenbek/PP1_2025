#include <iostream>

using namespace std;

int main(){

    string s;
    string t;

    getline(cin, s);
    getline(cin, t);
     
    if(s.find(t) != string :: npos){
        cout << "true";
    }else{
        cout << "false";
    }

    

    return 0;
}