//365 - informatics
#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int dr[] = {-1,0,1,0};
    int dc[] = {0,-1,0,1};

    int di = 0;

    /*
    for(int i = 0; i < 100; ++i){
        cout << dr[di % 4] << " " << dc[di % 4] << endl;
        di = di + 1;
    }
    */
    int step[4 * n + 1];
    int k = 0;
    for(int i = 1; i <= 2 * n; ++i){
        for(int j = 1; j <=2; ++j){
            step[k] = i;
            k = k + 1;
        }
    }
    step[k] = 2 * n;

    int arr[2 * n + 1][2 * n + 1];

    int r = n;
    int c = n;
    int v = 0;

    for(int i = 0; i < 2 * n + 1; ++i){
        for(int j = 0; j < 2 * n + 1; ++j){
            arr[i][j] = 0;
        }
    }

    arr[r][c] = v;
    k = 0;

    bool isOK = true;

    while(isOK){
        for(int i = 0; i < step[k]; ++i){
            r = r + dr[di];
            c = c + dc[di];
            arr[r][c] = ++v;
            if(v >= (2 * n + 1) * (2 * n + 1)){
                isOK = false;
                break;
            }
        }
        di = (di + 1) % 4;
        k = k + 1;
    }


    for(int i = 0; i < 2 * n + 1; ++i){
        for(int j = 0; j < 2 * n + 1; ++j){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}