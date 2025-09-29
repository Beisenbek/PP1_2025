#include <iostream>

using namespace std;

int main(){

    int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};

    //for (int &x : a) x *= 2;

    for (int x : a) cout << x << " "; 



    return 0;
}