#include <iostream>
#include <vector>

using namespace std;

void print(string fname, string sname){
    cout << fname << " " << sname << endl;
}

int main(){

    vector<string> names;
    vector<string> snames;

    int n;
    cin >> n;
    string name, sname;

    for(int i = 0; i < n; ++i){
        cin >> name >> sname;
        names.push_back(name);
        snames.push_back(sname);
    }

    for(int i = 0 ;i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            if(names[i] > names[j]){
                swap(names[i], names[j]);
                swap(snames[i], snames[j]);
            }
        }
    }

    for(int i = 0; i < n; ++i){
        print(names[i], snames[i]);
    }

    return 0;
}

