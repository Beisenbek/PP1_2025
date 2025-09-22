#include <iostream>

using namespace std;

int main(){

    int x,n;
    cin >> x >> n;

    x = x | (1 << n);

    cout << x;

       
    return 0;
}