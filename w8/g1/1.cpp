#include <iostream>

using namespace std;

int main(){

    string s;
    string t;

    getline(cin, s);
    getline(cin, t);
    
    bool ok = true;

    for(int i = 0; i <= s.size() - t.size(); ++i){
        ok = true;
        for(int j = 0; j < t.size(); ++j){
            if(s[i + j] != t[j]){
                ok = false;
                break;
            }
        }
        if(ok){
            break;
        }
    }

    if(ok){
        cout << "true";
    }else{
        cout << "false";
    }

    

    return 0;
}