#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;
    int k;
    cin >> k;
    string str = "";
    string base = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char p;
    while(x > 0){
        int r = x % k;
        str = base[r] + str;
        x = x / k;
    }

    cout << str;

       
    return 0;
}