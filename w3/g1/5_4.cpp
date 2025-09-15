#include <iostream>

using namespace std;


int main(){

    int a,b,c;
    cin >> a >> b >> c;

    bool q1 = a + b > c;
    bool q2 = c + b > a;
    bool q3 = a + c > b;

    if(q1 && q2 && q3){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
