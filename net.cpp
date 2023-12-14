#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    long long a1[n+5], a2[m+5];
    for(int i=0; i<n; i++){
        cin>>a1[i];
    }
    for(int i=0; i<m; i++){
        cin>>a2[i];
    }
    long long d, k, r = 0;
    for(int i = 0; i < n; i++){
        k = lower_bound(a2, a2 + m, a1[i]) - a2;
        if(k == 0) {
            d = abs(a2[k] - a1[i]);
        }else if(k==m){
            d = abs(a1[i]-a2[k-1]);
        }else{
            long long rd = abs(a2[k]-a1[i]);
            long long ld = abs(a1[i]-a2[k-1]);
            d = min(rd,ld);
        }
        r=max(r,d);
    }
    cout<<r;
    return 0;
}
