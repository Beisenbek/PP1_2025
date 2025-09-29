#include <iostream>

using namespace std;

int main(){

    int i = 1;
    int j = 1;
    int x = i++ + ++j;

    cout << x << " " << i << " " << j;

    //int k = 1;
    //int z = k++ + ++k
    //z???

    return 0;
}