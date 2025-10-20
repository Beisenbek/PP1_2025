#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        size_t pos = s.find("@");
        if(pos != string::npos){
            string login = s.substr(0, pos);
            string domain = s.substr(pos);
            //cout << login << " " << domain << endl;
            if(domain == "@gmail.com"){
                cout << login << endl;
            }
        }
    }
   
    return 0;
}