#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int w, n;
    cin >> w >> n;
    vector<int> s1(n);
    vector<int> s2(n);
    for(int i = 0; i < n; i++) cin >> s1[i] >> s2[i];
    int m = 0;
    for(int i = 0; i < pow(2,n); i++){
        int t2[2] = {};
        int a[2] = {};
        int x = i;
        for(int j = 0; j < n; j++){
            t2[x%2] += s1[j];
            a[x%2] += s2[j];
            x /= 2;
        }
        if(t2[0] <= w){
            m = max(m,a[0]);
        }
    }
    cout << m;

    return 0;
}
