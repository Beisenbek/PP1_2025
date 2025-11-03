#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> s;

    s.insert(100);
    s.insert(50);
    s.insert(1);

    set<int> :: reverse_iterator it1;

    for(it1 = s.rbegin(); it1 != s.rend(); ++it1){
        cout << *it1 << " ";
    }

    set<int> :: iterator it2;

    cout << endl;

    for(it2 = s.begin(); it2 != s.end(); ++it2){
        cout << *it2 << " ";
    }



    return 0;
}