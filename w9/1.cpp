#include <iostream>

using namespace std;

int f1(int a, int b){
    int c = a + b;
    return c;
}

void f2(int a, int b){
    cout << a + b;
}

int main(){

    int k = f1(2,3);
    cout << k << endl;

    f2(2,3);

    return 0;
}