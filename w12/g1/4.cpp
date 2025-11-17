#include <iostream>
#include <stack>


using namespace std;

int main(){

    string line;
    cin >> line;

    stack<char> st;

    bool right = true;

    for(size_t i = 0; i < line.size(); ++i){
        if(line[i] == '('){
            st.push('(');
        }else if(line[i] == ')'){
            if(st.empty()){
                right = false;
                break;
            }else{
                st.pop();
            }
        }
    }

    if(!st.empty()){
        right = false;
    }

    if(right){
        cout << "YES";
    }else{
        cout << "NO";
    }



    return 0;
}

