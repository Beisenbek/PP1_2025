#include <iostream>

using namespace std;

int main(){

    char x;
    int k = 0;
    while(cin >> x){
        k = k + 1;
    }
    cout << k - 1;//max index
    return 0;
}