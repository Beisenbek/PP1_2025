#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<student> v(n);

    for(int i = 0; i < n; ++i){
        v[i].getInfo();
    }

    sort(v.begin(), v.end(), comp_by_gpa_desc);


    for(int i = 0; i < n; ++i){
        v[i].printInfo();
    }

    return 0;
}