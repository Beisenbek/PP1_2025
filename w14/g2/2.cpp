#include <iostream>

using namespace std;

int f(int x){
    if(x == 1 || x == 2) return 1;
    return f(x - 1) + f(x - 2);
}

int f2(int x){
    int f1 = 1;
    int f2 = 1;
    for(int i = 3; i<=x; ++i){
        int f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return f2;
}

int main(){

    int x;
    cin >> x;
    cout << f(x) << " " << f2(x);

    return 0;
}