#include <iostream>

using namespace std;

int main(){

    int a[] = {1,2,3,4,5,6,7,8,9,10,12,13,14};

    int n = sizeof(a) / sizeof(a[0]);

    cout << n << endl;

    for(int i = 0; i < n; i = i + 1){
        cout << a[i] << " ";
    } 

    return 0;
}