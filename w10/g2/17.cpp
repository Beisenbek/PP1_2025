#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

    vector<int> v;
    int n;
    cin >> n;
    int x;

    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), less<int>());
    //sort(v.begin(), v.end(), greater<int>());

    for(auto it1 = v.begin(); it1 != v.end(); ++it1){
        cout << *it1 << " ";
    }

    return 0;
}

