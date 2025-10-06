//356 - informatics
//https://informatics.msk.ru/mod/statements/view.php?id=282&chapterid=356#1
#include <iostream>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
           cin >> a[i][j];
        }
    }

    int s[n];

    for(int i = 0; i < n; ++i){
        s[i] = 0;
        for(int j = 0; j < m; ++j){
           s[i] = s[i] + a[i][j];
        }
        //cout << s[i] << " ";
    }

    int winner_index = 0;

    for(int i = 1; i < n; ++i){
        if(s[winner_index] < s[i]){
            winner_index = i;
        }
    }

    cout << s[winner_index] << endl << winner_index;

    return 0;
}