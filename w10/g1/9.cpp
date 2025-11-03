#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    string s[] = {"apple", "orange","carrot", "peach", "kiwi"};

    int k = 5;

    for(int i = 0; i < k; ++i){
        m[s[i]] = s[i].size();
    }


    for(int i = 0; i < k; ++i){
       cout << s[i] << " " << m[s[i]] << endl;
    }




    return 0;
}