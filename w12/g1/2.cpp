#include <iostream>
#include <queue>


using namespace std;

queue<pair<int, int> > q;
int a[8][8];

void try_step(int x, int y, int k){
    if(x < 8 && y < 8){
        if(x >= 0 && y >= 0){
            if(a[x][y] == -1){
                a[x][y] = k + 1;
                q.push(make_pair(x, y));
            }
        }
    }
}

int main(){

    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            a[i][j] = -1;
        }
    }

    int x1, y1;
    cin >> x1 >> y1;
    int x2, y2;
    cin >> x2 >> y2;

    a[x1][y1] = 0;
    q.push(make_pair(x1, y1));

    while(!q.empty()){
        pair<int, int> cur = q.front();
        int k = a[cur.first][cur.second];
        q.pop();
        try_step(cur.first + 1, cur.second - 2, k);
        try_step(cur.first + 2, cur.second - 1, k);
        try_step(cur.first + 2, cur.second + 1, k);
        try_step(cur.first + 1, cur.second + 2, k);
        try_step(cur.first - 1, cur.second + 2, k);
        try_step(cur.first - 2, cur.second + 1, k);
        try_step(cur.first - 2, cur.second - 1, k);
        try_step(cur.first - 1, cur.second - 2, k);
    }

    //cout << a[x2][y2];

    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }


    return 0;
}

