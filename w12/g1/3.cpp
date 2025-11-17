#include <iostream>
#include <stack>


using namespace std;

int main(){

    stack<int> st;

    st.push(7);
    st.push(11);
    st.push(1);

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }




    return 0;
}

