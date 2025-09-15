#include <iostream>

using namespace std;


int main(){

    int x = 0;

    for(;;){
        x = x + 1;
        if( x % 2 == 0) continue;
        cout << x << " ";
        if(x > 10) break;
    }

    return 0;
}
