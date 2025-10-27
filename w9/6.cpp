#include <iostream>

using namespace std;

int sum_array(int * a, int size){
    int sum = 0;
    for(int i =0; i < size; i++){
        sum += a[i];
    }
    return sum;
}

int sum_array2(int a[], int size){
    int sum = 0;
    for(int i =0; i < size; i++){
        sum += a[i];
    }
    return sum;
}


int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << sum_array(arr, n) << endl;
    cout << sum_array2(arr, n) << endl;

    return 0;
}
