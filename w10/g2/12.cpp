#include <iostream>
#include <map>

using namespace std;


int main(){

    map<string, int> m;
    
    m["apple"] = 1;
    m["orange"] = 2;
    m["kiwi"] = 3;
    m["kiwi"] = 30;

    map<string, int> :: iterator it1;

    for(it1 = m.begin(); it1 != m.end(); ++it1){
        cout << (*it1).first << " " << (*it1).second << endl;
    }

    return 0;
}

