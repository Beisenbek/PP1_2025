#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> v;

    for(int i = 100; i >=1; --i){
        v.push_back(i);
    }

    sort(v.begin(), v.end());

    for(auto it1 = v.begin(); it1 != v.end(); ++it1){
        cout << *it1 << " ";
    }


    return 0;
}

