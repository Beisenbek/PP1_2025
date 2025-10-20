#include <iostream>

using namespace std;

int main(){

    string str;
    cin >> str;

    string pattern;
    cin >> pattern;

    cout << str.find(pattern);
 

    return 0;
}