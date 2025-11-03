#include <iostream>
#include <map>

using namespace std;


int main(){

    map<string, int> m;
    
    int n = 3;
    string s[] = {"orange", "apple",  "kiwi", "orange"};

    for(int i = 0; i < n; ++i){
        m[s[i]] = s[i].size();
    }

    map<string, int> :: iterator it1;

    for(it1 = m.begin(); it1 != m.end(); ++it1){
        cout << (*it1).first << " " << (*it1).second << endl;
    }

    return 0;
}

