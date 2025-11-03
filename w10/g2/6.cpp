#include <iostream>
#include <vector>

using namespace std;

void read(vector<int> v, int n){
    int x;
    for(int i = 0; i < n; ++i){
        cin >> x;
        cout << x << " ";
        v.push_back(x);
    }
}

void print(vector<int> v){
    for(vector<int> :: iterator it1 = v.begin(); it1 != v.end(); ++it1){
        cout << *it1 << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v;
    int n;
    cin >> n;
    read(v, n);
    print(v);

    return 0;
}

