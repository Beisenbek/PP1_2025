#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    string res = "";

    while(x > 0){
        res  = char(x % 2 + '0') + res;
        x = x / 2;
    }
    cout << res;
    return 0;
}