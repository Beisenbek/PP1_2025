#include <iostream>
#include <stack>

using namespace std;

int main(){

    string str;
    cin >> str;

    stack<char> st;

    bool f = true;

    for(size_t i = 0; i < str.size(); ++i){
        if(str[i] == '('){
            st.push('(');
        }else if(str[i] == ')'){
            if(st.empty()){
                f = false;
                break;
            }else{
                st.pop();
            }
        }
    }

    if(!st.empty()){
        f = false;
    }

    if(f == false){
        cout << "NO";
    }else{
        cout << "YES";
    }


    return 0;
}