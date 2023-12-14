#include<bits/stdc++.h>
using namespace std;
void in(int t[][10], int n, int m);
void out(int t[][10], int n, int m, int k);
int f(int t[][10], int n, int m);
void in(int t[][10], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> t[i][j];
        }
    }
}
void out(int t[][10], int n, int m){
    int mi = 0;
    for(int i = 0; i < m; i++){
        if(mi > f(t,n,i)){
            mi = f(t,n,i);
        }
    }
    for(int i = 0; i < m; i++){
        if(mi == f(t,n,i)){
            cout << i << " ";
        }
    }
    cout << endl;
}
int f(int t[][10], int n, int m){
    int br = 0;
    for(int i = 0; i < n; i++){
        if(t[i][m] > 0){
            br++;
        }
    }
    return br;
}


int main(){
    int t[10][10], n, m, k;
    cin >> n >> m;
    in(t, n, m);
    out(t, n, m);
    return 0;
}
