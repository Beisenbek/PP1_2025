#include <iostream>

using namespace std;

int main(){

    int x,k;
    cin >> x >> k;

    string base = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string res = "";

    while(x > 0){
        res = base[x % k] + res;
        x = x / k;
    }
    cout << res;
    return 0;
}