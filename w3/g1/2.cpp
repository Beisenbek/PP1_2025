#include <iostream>

using namespace std;


//print next symbol by ASCII Code
int main(){
    char c;
    cin >> c;
    int h = c;   //type casting
    cout << char(h + 1) << endl; //type casting
    cout << char(int(c) + 1); //type casting
    return 0;
}