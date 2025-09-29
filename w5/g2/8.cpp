#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int &x : a) x = x * 2;    // modifies elements
    
    for (int x : a){
        cout << x << " "; // read-only copy
        cout << x + 1 << " ";
    } 
    

    return 0;
}