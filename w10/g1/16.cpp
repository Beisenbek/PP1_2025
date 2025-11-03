#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> v){
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout <<endl;
}

int main(){

    int n, x;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }

    printVector(v);
    
    while(next_permutation(v.begin(), v.end())){
        printVector(v);
    }
   
       

    return 0;
}