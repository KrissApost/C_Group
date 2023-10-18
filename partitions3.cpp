#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
const int m = 1000000007;
long long t[2001][2001];
int n;
long long func(int n){
    long long i, j;
    for(int j = 0; j <= n; j++){
        t[j][1] = 1;
    }
    for (j = 3; j <= n; j+=2){
        for (i = 0; i <= n; i++){
            t[i][j] = (t[i][j-2] + (i-j>=0? t[i-j][j]: 0)) % m;
        }
    }
    if(n % 2 == 0){
        return t[n][n-1];
    }
    return t[n][n] % m;
}
int main(){
    cin >> n;
    cout << func(n);
    return 0;
}
