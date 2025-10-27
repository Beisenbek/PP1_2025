#include <iostream>

using namespace std;

string s;

void f(){
    s = "hello";
    cout << s << endl;
}

void f2(){
    cout << s << "!!!" << endl;
}

int main(){ 
    f();
    f2();
    return 0;
}
