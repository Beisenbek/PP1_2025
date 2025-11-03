#include <iostream>
#include <set>

using namespace std;


int main(){
    set<int> s;

    s.insert(10);
    s.insert(1);
    s.insert(100);
    s.insert(123);
    s.insert(15);

    cout << *s.begin() << " ";
    cout << *s.rbegin();



    return 0;
}

