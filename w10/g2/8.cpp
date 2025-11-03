#include <iostream>
#include <set>

using namespace std;


int main(){
    set<int> s;

    s.insert(10);
    s.insert(1);
    s.insert(100);
    s.insert(100);
    s.insert(100);
    s.insert(100);
    s.insert(100);
    s.insert(100);
    s.insert(123);
    s.insert(15);

    for(set<int> :: iterator it1 = s.begin(); it1 != s.end(); ++it1){
        cout << *it1 << " ";
    }

    return 0;
}

