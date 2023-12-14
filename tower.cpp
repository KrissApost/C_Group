#include <bits/stdc++.h>
using namespace std;
int arr1[101], arr2[101], dp[101][101][2];
int func(int n, int s, bool b){
    if(n == 0) return 0;
    if(s == 0 && b) return 0;
    if(dp[n][s][b] != 0) return dp[n][s][b];
    int h = arr2[n], r = s, ans = 1;
    if(b) {
      h = arr1[n];
    }
    if(b){
      r--;
    }
    for(int i = 1; i < n; i++ ){
        if(arr2[i] <= h) ans = max(ans, 1+func(i, r, false));
        if(arr1[i] <= h) ans = max(ans, 1+func(i, r, true));
    }
    dp[n][s][b] = ans;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, s;
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        cin >> arr2[i] >> arr1[i];
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
         ans = max(ans, func(i, s, true));
         ans = max(ans, func(i, s, false));
    }
    cout << ans;
    return 0;
}
