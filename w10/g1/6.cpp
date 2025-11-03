#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> s;

    s.insert(100);
    s.insert(50);
    s.insert(1);

    cout << *s.rbegin();



    return 0;
}