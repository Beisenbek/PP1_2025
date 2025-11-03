#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> s;

    for(int i = 100; i >= 1; --i){
        s.insert(i);
    }

    for(int i = 100; i >= 1; --i){
        s.insert(i);
    }

    set<int> :: iterator it1;

    for(it1 = s.begin(); it1 != s.end(); ++it1){
        cout << *it1 << " ";
    }

    cout << endl;

    cout << *s.begin();



    return 0;
}