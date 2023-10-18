#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    n--;
    int ans = 1;
    while(n != 0){
        n--;
        ans *= 2;
        ans %= 1000000007;
    }
    cout << ans;
    return 0;
}
