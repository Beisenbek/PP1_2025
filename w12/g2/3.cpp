#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int> st;

    st.push(1);
    st.push(11);
    st.push(7);

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}