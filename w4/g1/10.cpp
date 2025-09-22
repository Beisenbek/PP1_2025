#include <iostream>

using namespace std;

int main(){

    int x;
    char action;

    cin >> x >> action;

    int index;

    if(action == 'A') index = 2;
    if(action == 'B') index = 1;
    if(action == 'C') index = 0;

    int res = (x & (1 << index));

    if(res  == 0) cout << "Not allowed!";
    else cout << "Allowed!";



    return 0;
}