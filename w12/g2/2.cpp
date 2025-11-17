#include <iostream>
#include <queue>

using namespace std;

queue<pair<int, int> > q;
int a[100][100];
int n;


void try_step(int x, int y, int k){
    if(x < n && y < n){
        if(x >= 0 && y >= 0){
            if(a[x][y] == -1){
                a[x][y] = k + 1;
                q.push(make_pair(x, y));
            }
        }
    }
}

int main(){

    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            a[i][j] = -1;
        }
    }

    int x1, y1;
    cin >> x1 >> y1;
    a[x1][y1] = 0;
    q.push(make_pair(x1, y1));

    int x2, y2;
    cin >> x2 >> y2;


    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();
        int x = cur.first;
        int y = cur.second;
        int k = a[x][y];
        try_step(x + 1, y - 2, k);
        try_step(x + 2, y - 1, k);
        try_step(x + 2, y + 1, k);
        try_step(x + 1, y + 2, k);
        try_step(x - 1, y + 2, k);
        try_step(x - 2, y + 1, k);
        try_step(x - 2, y - 1, k);
        try_step(x - 1, y - 2, k);
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }


    cout << a[x2][y2];

    return 0;
}