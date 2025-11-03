#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v;

    for(int i = 1; i <=1000; ++i){
        v.push_back(i);
    }

    for(int i = 0; i < v.size(); ++i){
        cout << v.at(i) << " ";
    }



    return 0;
}

