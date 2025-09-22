#include <iostream>
#include <cmath>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.size() - 1;

    int res = 0;

    for(int i = 0; i <= n; i = i + 1){
        res = res + int(s[i] - 48) * pow(2, n - i);
    }

    cout << res;
       
    return 0;
}