#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print2(pair<string, string> p){
    cout << p.first << " " << p.second << endl;
}

int main(){

    vector<pair<string, string> > students;

    int n;
    cin >> n;
    string name, sname;

    for(int i = 0; i < n; ++i){
        cin >> name >> sname;
        students.push_back(make_pair(name, sname));
    }

    sort(students.begin(), students.end());

    for(int i = 0; i < n; ++i){
        print2(students[i]);
    }

    return 0;
}

