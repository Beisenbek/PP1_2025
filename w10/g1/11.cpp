#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    m.insert(make_pair("carrot", 6));
    m.insert(make_pair("apple", 5));
    m.insert(make_pair("orange", 6));
    m.insert(make_pair("peach", 5));
    m.insert(make_pair("apple", 500));



    for(auto it1 = m.begin(); it1 != m.end(); ++it1){
        cout << it1->first << " " << it1->second << endl;
    }

    return 0;
}