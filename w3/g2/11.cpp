#include <iostream>


using namespace std;

int main(){

    
    int x = 0;
    
    for(;;){
        x = x + 1;
        if(x % 2 == 1) continue;
        cout << x << " ";
        if(x > 8) break;
    } 
  
    return 0;
}