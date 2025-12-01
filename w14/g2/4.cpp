#include <iostream>

using namespace std;


int memory[100];

int f(int x){
    if(memory[x] == -1){
        memory[x] = f(x - 1) + f(x - 2);
    }
    return memory[x];
}


int main(){

    memory[1] = memory[2] = 1;
    for(int i = 3; i <= 100; ++i){
        memory[i] = -1;
    }

    int x;
    cin >> x;
    cout << f(x);

    return 0;
}