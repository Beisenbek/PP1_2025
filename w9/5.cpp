#include <iostream>

using namespace std;

int min_ab(int a, int b){
    if(a > b){
        return b;
    } else {
        return a;
    }
}

int min_abcd(int a, int b, int c, int d){
    if(a < b && a < c && a < d){
        return a;
    } else if(b < a && b < c && b < d){
        return b;
    } else if(c < a && c < b && c < d){
        return c;
    } else {
        return d;
    }
}

int min_abcd2(int a, int b, int c, int d){
 return  min_ab(min_ab(a, b), min_ab(c, d));
}


int main(){

    int a, b, c,d;
    cin >> a >> b >> c >> d;

    cout << min_abcd(a,b, c ,d) << endl;
    cout << min_abcd2(a,b, c ,d);

    return 0;
}
