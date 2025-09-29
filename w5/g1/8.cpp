#include <iostream>

using namespace std;

int main(){

    int i = 1;
    int j = 1;

    int x = i++ + ++j;

    int k = 1;
    int y = k++ + ++k;

    cout << x << " " << i  << " " << j << endl;
    cout << k;

    return 0;
}