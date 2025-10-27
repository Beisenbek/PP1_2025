#include <iostream>
#include <cmath>

using namespace std;

string f(int n ){
    string s = to_string(n);
    if(s.size() % 2 == 0){
        return "Valid";
    }else{
        return "Not valid";
    }
}

int main(){ 
    
    int n;
    cin >> n;
    cout << f(n);

    return 0;
}
