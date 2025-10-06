#include <iostream>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int res =  0;
    int x;

    for(int i = 0; i < n * m; ++i){
        cin >> x;
        if(x < 0) res++;        
    }

    cout << res;

    return 0;
}