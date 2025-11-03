#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    vector<int> v(10);

    v[0] = 100;
    v[1] = 101;
    v[2] = 102;
    v[3] = 103;
    v[4] = 104;
    v[5] = 105;
    v[6] = 106;
    v[7] = 107;
    v[8] = 108;
    v[9] = 109;

    v.push_back(110);
    v[10] = 11111;




    return 0;
}