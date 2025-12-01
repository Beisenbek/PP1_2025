#include <iostream>

using namespace std;

int f(int x){
    if(x == 1) return 1;
    return f(x - 1) + x;
}

int f2(int x){
    int res = 0;
    for(int i = 1; i <= x; ++i){
        res += i;
    }
    return res;
}

int main(){
    int x;
    cin >> x;
    cout << f(x) << " " << f2(x);
    return 0;
}