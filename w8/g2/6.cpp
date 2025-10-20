#include <iostream>

using namespace std;

int main(){

    string str;
    cin >> str;

    string pattern;
    cin >> pattern;
    bool ok;
    
    for(size_t i = 0; i <= str.size() - pattern.size(); ++i){
        ok = true;
        for(size_t j = 0; j < pattern.size(); ++j){
            if(str[i + j] != pattern[j]){
                ok = false;
                break;
            }
        }
        if(ok){
            break;
        }
    }
    if(ok){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}