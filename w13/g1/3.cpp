#include <iostream>
#include <vector>

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

    for(int i = 0 ;i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            if(students[i].first > students[j].first){
                swap(students[i], students[j]);
            }
        }
    }

    for(int i = 0; i < n; ++i){
        print2(students[i]);
    }

    return 0;
}

