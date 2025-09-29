#include <iostream>

using namespace std;

int main(){

    int a[] = {121,2,3,4,5,6,7,8,9,10,12,13,14};


    cout << a << " " << *a << endl;
    cout << (a+1) << " " << *(a+1) << endl;
    cout << "++++++++++++++++" << endl;
    cout << *(a+1)<<" "<<a[1] << endl;
    cout << *(a+0)<<" "<<a[0] << endl;

    return 0;
}