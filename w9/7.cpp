#include <iostream>

using namespace std;

int mutate(int * a, int size){
    int sum = 0;
    for(int i =0; i < size; i++){
        sum += a[i];
    }
    a[0] = 100;
    cout << "in mutate function: ";
    cout << a[0] << endl;
    return sum;
}

int mutate2(int a[], int size){
    int sum = 0;
    for(int i =0; i < size; i++){
        sum += a[i];
    }
    a[0] = 200;
    cout << "in mutate2 function: ";
    cout << a[0] << endl;
    return sum;
}

int mutate3(int a[], int size){
    int b[size];
    for(int i = 0; i < size; i++){
        b[i] = a[i];
    }

    int sum = 0;
    for(int i =0; i < size; i++){
        sum += b[i];
    }
    b[0] = 300;
    cout << "in mutate3 function: ";
    cout << b[0] << endl;
    return sum;
}

int mutate4(int a[], int size){
    //????
    return 0;
}


int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << mutate(arr, n) << endl;
    cout << arr[0] << endl;

    int arr2[] = {1,2,3,4,5};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    cout << mutate2(arr2, n2) << endl;
    cout << arr2[0] << endl;

    int arr3[] = {1,2,3,4,5};
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    cout << mutate3(arr3, n3) << endl;
    cout << arr3[0] << endl;


    return 0;
}
