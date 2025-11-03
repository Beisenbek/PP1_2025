#include <iostream>
#include <vector>
#include <map>

using namespace std;


vector<int> f(int x){
    vector<int> res;
    for(int i = 1; i <= x; ++i){
        if(x % i == 0){
            res.push_back(i);
        }
    }
    return res;
}

void print(vector<int> v){
    for(vector<int> :: iterator it1 = v.begin(); it1 != v.end(); ++it1){
        cout << *it1 << " ";
    }
    cout << endl;
}

int main(){

    int n;
    cin >> n;
    int x;

    map<int, vector<int> > m;

    for(int i = 0; i < n; ++i){
        cin >> x;
        m[x] = f(x);
    }

    map<int, vector<int> > :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << it->first << ": ";
        print(it->second);
    }

    return 0;
}

