#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;
    string str = "";
    string base = "0123456789ABCDEF";
    char p;
    while(x > 0){
        str = base[x % 16] + str;
        x = x / 16;
    }

    cout << str;

       
    return 0;
}