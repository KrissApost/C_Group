#include <bits/stdc++.h>
using namespace std;
long long arr[100000];
int lf[100001];
int dp[100001][501];
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, k, l;
    cin >> n >> k >> l;
    for (int i = 1; i <= n - 1; i++) {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        while (q.size() && arr[i - 1] - arr[q.front() - 1] > l) q.pop();
        q.push(i);
        lf[i] = q.front();
    }
    for (int i = 0; i <= n; i++) {
        dp[i][0] = dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            int h = lf[lf[i]] - 1;
            dp[i][j] = max(dp[i - 1][j], dp[h][j - 1] + i - h);
        }
    }

    cout << dp[n][k] << endl;
    return 0;

}

