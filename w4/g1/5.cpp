#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    string res = "";

    while(x > 0){
        int r = x % 16;
        if(r < 10)
            res  = char(r + '0') + res;
        else if(r== 10){
            res  = 'A' + res;
        }
        else if(r== 11){
            res  = 'B' + res;
        }
        else if(r== 12){
            res  = 'C' + res;
        }
        else if(r== 13){
            res  = 'D' + res;
        }
         else if(r== 14){
            res  = 'E' + res;
        }
         else if(r== 15){
            res  = 'F' + res;
        }
        x = x / 16;
    }
    cout << res;
    return 0;
}