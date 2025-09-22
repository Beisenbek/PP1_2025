#include <iostream>
#include <cmath>
using namespace std;

int main(){

    string x;
    cin >> x;
    int sum = 0;

    for(int i = x.size() - 1; i >=0; i = i - 1){
        int t = pow(2,i);
        int index = x.size() - 1 - i;
        int k = int(x[index] - '0');
        sum = sum + k * t;
    }

    cout << sum;


    return 0;
}