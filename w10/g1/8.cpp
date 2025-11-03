#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    m["apple"] = 5;
    m["orange"] = 6;
    m["carrot"] = 6;
    m["peach"] = 5;


    map<string, int> :: iterator it1;

    for(it1 = m.begin(); it1 != m.end(); ++it1){
        cout << it1->first << " " << it1->second << endl;
        //cout << (*it1).first << " " <<  (*it1).second << endl;
    }


    return 0;
}