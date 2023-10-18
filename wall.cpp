#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    long long k;
    cin >> n >> k;
    priority_queue<pair<int,int>> q;
    int x, y;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        q.push({y,x});
    }
    long long s = 0;
    while(k > 0 && !q.empty()){
        int a = q.top().first, a2 = q.top().second;
        q.pop();
        long long h = a2 / a;
        if(k < h) h = k;
        k -= h;
        s += h * a;
        if(a2 % a != 0){
            q.push({a2 % a,a2 % a});
        }
    }
    cout << s;

    return 0;
}
