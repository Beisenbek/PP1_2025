#include <iostream>

using namespace std;


int main(){

    int x = 0;

    do{
        x = x + 1;
        if( x % 2 == 0) continue;
        cout << x << " ";
    }while(x <= 10);

    return 0;
}
