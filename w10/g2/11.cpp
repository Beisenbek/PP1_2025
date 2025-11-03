#include <iostream>
#include <map>

using namespace std;


int main(){

    map<string, int> m;
    
    int n = 3;
    string s[] = {"orange", "apple",  "kiwiiiii"};

    for(int i = 0; i < n; ++i){
        m[s[i]] = s[i].size();
    }


    for(int i = 0; i < n; ++i){
        cout << s[i] << " " << m[s[i]] << endl;
    }

    return 0;
}

