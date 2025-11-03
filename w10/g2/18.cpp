#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void f(int x){
    cout << x << ": ";
    for(int i = 1; i <= x; ++i){
        if(x % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){

    int n;
    cin >> n;
    int x;

    for(int i = 0; i < n; ++i){
        cin >> x;
        f(x);
    }

    return 0;
}

