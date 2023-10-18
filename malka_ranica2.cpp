#include <bits/stdc++.h>
using namespace std;
int dp[2001][2001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int w, n;
    cin >> w >> n;
    vector<pair<int,int>> s1(n+1);
    for(int i = 0; i < n; i++) cin >> s1[i].first >> s1[i].second;
    sort(s1.begin(),s1.end());
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= w; j++){
            dp[i][j] = dp[i-1][j];
            if(j - s1[i].first >= 0){
                dp[i][j] = max(dp[i-1][j],dp[i-1][j - s1[i].first] + s1[i].second);
            }
        }
    }
    cout << dp[n][w];

    return 0;
}
