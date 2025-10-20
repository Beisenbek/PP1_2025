#include <iostream>

using namespace std;

int main(){

    string str;
    cin >> str;
    for(size_t i = 0; i < str.size(); ++i){
         cout << str[i] << " ";
    }

    return 0;
}