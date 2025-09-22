#include <iostream>
#include <cmath>
using namespace std;

int main(){

    string x;
    cin >> x;
    int sum = 0;

    for(int red_i = 0; red_i < x.size(); red_i = red_i + 1){
        int blue_i = x.size() - 1 - red_i;
        int koef =  x[red_i] - '0';
        sum = sum + pow(2,blue_i) * koef;
    }

    cout << sum;


    return 0;
}