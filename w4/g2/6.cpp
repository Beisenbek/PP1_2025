#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;
    char action;
    cin >> action;
    int index;

    if(action == 'A') index = 2;
    if(action == 'B') index = 1;
    if(action == 'C') index = 0;

    int result = (x & (1 << index));

    if(result == 0) cout << "Denied!";
    else cout << "Access!";


       
    return 0;
}