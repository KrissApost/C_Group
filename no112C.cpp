#include<bits/stdc++.h>
using namespace std;
vector<long long> v[1001];
long long vis[1001];
void dfs(long long x,long long c){
    vis[x] = c;
    for(int i = 0; i < v[x].size(); i++){
        if(vis[v[x][i]] == 0) dfs(v[x][i], c);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    long long v=1;
    for(int i=0;i<n;i++){
        if(vis[i]==0){
            vis[i]=v;
            dfs(i,v);
            v++;
        }
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        if(vis[a] == vis[b]) cout << "1";
        else cout << "0";
    }
    cout << endl;
    return 0;
}
