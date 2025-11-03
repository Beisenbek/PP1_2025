#include <iostream>
#include <map>

using namespace std;


int main(){

    map<string, int> m;
    
    m.insert(make_pair("apple", 1));
    m.insert(make_pair("orange", 3));
    m.insert(make_pair("kiwi", 2));
    m.insert(make_pair("kiwi", 200));

    map<string, int> :: iterator it1;

    for(it1 = m.begin(); it1 != m.end(); ++it1){
        cout << (*it1).first << " " << (*it1).second << endl;
    }

    return 0;
}

