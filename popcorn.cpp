#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
long long arr[100001], n, k, s, sum;
long long bs(){
    long long l = 0, r = sum, ans = 1000000000000000000;
    while(l <= r){
        long long m = (l+r)/2, h = 0, g = 0, o = 0;
        for(int i = 0; i < n - 1; i++){
            g += arr[i];
            if(g + arr[i + 1] > m){
                o++;
                g = 0;
            }
        }
        o++;
        if(o == k){
            ans = min(ans,m);
            r = m - 1;
        }
        if(o < k){
            r = m-1;
        }
        if(o > k){
            l = m+1;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k >> s;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    long long ans = bs();
    if(ans % s != 0){
        ans =  ans / s + 1;
    }else{
        ans = ans / s;
    }
    cout << ans;

    return 0;
}
