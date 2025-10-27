#include <iostream>

using namespace std;

void mutate(string s){
    s[0] = 'X';
    cout << "in mutate function: ";
    cout << s << endl;
}

void mutate2(string & s);


void mutate2(string & s){
    s[0] = 'X';
    cout << "in mutate function: ";
    cout << s << endl;
}


int main(){

    string str = "hello";
    mutate(str);
    cout << "in main function: ";
    cout << str << endl;


    string str2 = "hello";
    mutate2(str2);
    cout << "in main function: ";
    cout << str2 << endl;

    return 0;
}
