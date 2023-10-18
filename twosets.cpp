#include <bits/stdc++.h>
using namespace std;
const int m = 1e9 + 7, r =250 * 501 + 1;
int dp[501][r];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    dp[1][1] = 1;
    for(int i = 2; i <= n; i++){
        for(int j = 0; j <= i*(i+1)/2; j++){
            dp[i][j] = dp[i-1][j+i]+dp[i-1][abs(j-i)];
            dp[i][j] %= m;
        }
    }
    if(dp[n][0] % 2 == 1) dp[n][0] += m;
    dp[n][0] /= 2;
    dp[n][0]%=m;
    cout << dp[n][0];

    return 0;
}
