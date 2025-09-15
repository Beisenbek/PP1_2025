#include <iostream>


using namespace std;

int main(){

    
    int x = 0;
    
    for(;x <=10;){
        x = x + 1;
        if(x % 2 == 1) continue;
        cout << x << " ";
    } 
  
    return 0;
}