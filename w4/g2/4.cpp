#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;
    string str = "";
    char p;
    while(x > 0){
        if(x % 16 < 10)
            p = char(x % 16 + int('0'));
        else if( x % 16 == 10){
            p = 'A';
        }
        else if( x % 16 == 11){
            p = 'B';
        }
        else if( x % 16 == 12){
            p = 'C';
        }
        else if( x % 16 == 13){
            p = 'D';
        }
        else if( x % 16 == 14){
            p = 'E';
        }
        else if( x % 16 == 15){
            p = 'F';
        }
        str = p + str;
        x = x / 16;
    }

    cout << str;

       
    return 0;
}