#include <iostream>

using namespace std;

int main(){

    int N = 4;
    int a[N];

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 9;

    for(int i = 0; i < N; ++i){
        cout << a[i] << " ";
    }


    return 0;
}