#include <iostream>


using namespace std;

int main(){

    int x;
    cin >> x;

    string r = "";
    
    do{
        r =  r + char(x % 10 + 48);
        x = x / 10;
    }while(x > 0); 


    for(int i = r.size() - 1; i >=0; i = i - 1){
        cout << r[i] << " ";
    }

    return 0;
}