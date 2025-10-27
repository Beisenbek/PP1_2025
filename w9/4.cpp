#include <iostream>

using namespace std;

int min_ab(int a, int b){
    if(a > b){
        return b;
    } else {
        return a;
    }
}

int main(){

    int a, b;
    cin >> a >> b;

    cout << min_ab(a,b);

    return 0;
}
