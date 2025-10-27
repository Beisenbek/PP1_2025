#include <iostream>
#include <cmath>

using namespace std;

int findNthNumber(int arr[], int n, int X){
    bool ids[1001];
    for(int i = 1; i <= 100; i++){
        ids[i] = false;
    }
    for(int i = 0; i < n; i++){
        int index = arr[i];
        ids[index] = true;
    }
    int count = 0;
    int res = -1;
    for(int i = 1; i <= 1000; i++){
        if(ids[i] == false){
            count++;    
        }
        if(count == X){
            res = i;
            break;
        }
    }
    return res;
}

int main(){ 
    
    int arr[1000];

    int n  = 0;
    
    while(cin >> arr[n]){
        n++;
    }

    int x = arr[n - 1];
    n--;

    cout << findNthNumber(arr, n, x);

    return 0;
}
