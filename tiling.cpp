#include<bits/stdc++.h>
using namespace std;
long long dp[1001];
int main (){
    int n, m;
    cin >> n >> m;
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= max(n,m); i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[max(n,m)];
    return 0;
}
