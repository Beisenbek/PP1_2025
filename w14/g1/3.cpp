#include <iostream>

using namespace std;

int memory[100];

int f(int x){
    if(x == 1 || x == 2) return 1;
    return f(x - 1 ) + f(x - 2);
}


int f2(int x){
   int f1 = 1;
   int f2 = 1;
   for(int i = 3; i <= x; ++i){
        int f3 = f2 + f1;
        f1 = f2;
        f2 = f3;
   }
   return f2;
}

int f3(int x){
    if(memory[x] == -1){
        memory[x] = f3(x - 1) + f3(x - 2);
    }
    return memory[x];
}

int main(){
    for(int i = 1; i <= 100; ++i){
        memory[i] = -1;
    }
    memory[1] = 1;
    memory[2] = 1;
    int x;
    cin >> x;
    cout << f3(x);
    return 0;
}