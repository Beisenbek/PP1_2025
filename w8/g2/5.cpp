#include <iostream>

using namespace std;

int main(){

    string str;
    cin >> str;

    string pattern;
    cin >> pattern;

    if(str.find(pattern,2) == string::npos){
        cout << "NO";
    }else{
        cout << "YES";
    }
 

    return 0;
}