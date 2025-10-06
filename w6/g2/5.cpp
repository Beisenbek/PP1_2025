// 365
// https://informatics.msk.ru/mod/statements/view.php?id=282&chapterid=365#1
#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int step[4 * n + 1];
    int k = 0;
    for(int i = 1; i <= 2 * n; ++i){
        for(int j = 1; j <= 2; ++j){
            step[k] = i;
            k = k + 1;
        }
    }

    step[k] = 2 * n;
    /*
    for(int i = 0; i <= k; ++i){
        cout << step[i] << " ";
    }

    cout << endl;
*/
    int dr[] = {-1, 0, 1, 0};
    int dc[] = {0, -1, 0, 1};


    int a[2 * n + 1][2 * n + 1];
/*
    for(int i = 0; i < 2 * n + 1; ++i){
        for(int j = 0; j < 2 * n + 1; ++j){
            a[i][j] = 5;        
        }
    }*/

    int r = n;
    int c = n;
    int v = 0;

    a[r][c] = v;

    bool isOK = true;
    int uk = 0;
    int di = 0;

    while(isOK){
        for(int i = 0; i < step[uk]; ++i){
            r = r + dr[di];
            c = c + dc[di];
            a[r][c] = ++v;
            if(v >= (2*n +1) * (2*n +1)){
                isOK = false;
                break;
            }
        }
        di = (di + 1) % 4;
        uk = uk + 1;
    }

    for(int i = 0; i < 2 * n + 1; ++i){
        for(int j = 0; j < 2 * n + 1; ++j){
            cout << a[i][j] << "\t";       
        }
        cout << endl;
    }
    

    return 0;
}