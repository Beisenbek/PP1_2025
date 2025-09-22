#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;
    string str = "";
    while(x > 0){
        str = char(x % 2 + int('0')) + str;
        x = x / 2;
    }

    cout << str;

       
    return 0;
}