#include <iostream>
#include <climits>

using namespace std;

void read_array(int * begin, int * end){
    for(int * it = begin; it != end; ++it){
        cin >> * it;
    }
}

void print_array(int * begin, int * end){
    for(int * it = begin; it != end; ++it){
        cout << * it << " ";
    }
    cout << endl;
}

int max_in_array(int * begin, int * end){
    int max_value = INT_MIN;
    for(int * it = begin; it != end; ++it){
        max_value = max(max_value, *it);
    }
    return max_value;
}


int main(){

    int n;
    cin >> n;

    int a[n];

    read_array(a, a + n);
    print_array(a, a + n);
    cout << max_in_array(a, a + n);

    return 0;
}