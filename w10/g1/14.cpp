#include <iostream>
#include <vector>
#include <map>

using namespace std;

void f(int x){
    cout << x << ": ";
    for(int i = 1; i <= x; ++i){
        if(x % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

vector<int> f2(int x){
    vector<int> v;
    for(int i = 1; i <= x; ++i){
        if(x % i == 0){
            v.push_back(i);
        }
    }
   return v;
}

void printVector(vector<int> v){
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout <<endl;
}

void printMap(map<int, vector<int> > m){
    for(auto it1 = m.begin(); it1 != m.end(); ++it1){
        cout << it1->first << ": ";
        printVector(it1->second);
    }
}


int main(){

    int n, x;
    cin >> n;

    map<int, vector<int> > m;

    for(int i = 0; i < n; ++i){
        cin >> x;
        m[x] = f2(x);
    }

    printMap(m);


    return 0;
}