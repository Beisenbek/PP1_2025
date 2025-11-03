#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    vector<double> v;

    for(int i = 0; i < 100; ++i){
        v.push_back(sqrt(i));
    }

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }



    return 0;
}