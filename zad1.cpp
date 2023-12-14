#include<bits/stdc++.h>
using namespace std;

void in(int arr[10][10], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i * j % 2 == 0){
                arr[i][j] = 0;
            }
            else{
                arr[i][j] = 1;
            }
        }
    }
}

void out(int arr[10][10], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << setw(2) << arr[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    int arr[10][10], n, m;
    cin >> n >> m;
    in(arr, n, m);
    out(arr, n, m);
    return 0;
}
