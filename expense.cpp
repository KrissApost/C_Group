#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
long long arr[2000001];
long long dp[2000001];
int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    v.push_back(0);
    for (int i = 1;i <= n;i++){
        long long x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i = 1; i <= n; i++){
        arr[i] = arr[i-1] + v[i];
    }
    for(int i = 1; i <= n; i++){
        if(i >= a) dp[i] = max(dp[i], dp[i-a] + arr[i-a+b] - arr[i-a]);
        if(i >= c) dp[i] = max(dp[i], dp[i-c] + arr[i-c+d] - arr[i-c]);
    }
    cout << arr[n] - dp[n];
    return 0;
}
