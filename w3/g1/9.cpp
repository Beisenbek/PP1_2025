#include <iostream>

using namespace std;


int main(){

    for(int x = 1;;){
        cout << x << " ";
        x = x + 1;
        if(x > 10) break;//continue;
    }

    return 0;
}
