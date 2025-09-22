#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int x;
    cin >> x;
    string str = "";
    while(x > 0){
        str =  str + char(x % 2 + int('0'));
        x = x / 2;
    }

    reverse(str.begin(), str.end());

    cout << str;

       
    return 0;
}