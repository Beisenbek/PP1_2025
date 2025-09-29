#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cout << a << " " << *(a + 0) << " "  << a[0] <<endl;
    cout << a + 1 << " " << *(a + 1) << " "  << a[1]; 

    return 0;
}