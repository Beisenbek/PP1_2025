#include <iostream>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int a[n][m];

    int res =  0;
    int x;
    for(int i = 0; i < n * m; ++i){
        cin >> x;
        int r = i / m;
        int c = i % m;
        a[r][c] = x;
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            //if(a[i][j] < 0) res++;        
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << res;

    return 0;
}