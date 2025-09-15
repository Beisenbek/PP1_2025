#include <iostream>


using namespace std;

int main(){

    
    int x = 1;
    
    for(;;){
        cout << "OK";
        x = x + 1;
        if(x > 10) break;
    } 
  
    return 0;
}