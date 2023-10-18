#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
vector<int> v[1000];
bool visited[1000];
void dfc(int x){
    if(visited[x]) return;
    visited[x] = 1;
    for(int i = 0; i < v[x].size(); i++){
        dfc(v[x][i]);
        visited[v[x][i]] = 1;
    }
}
int main(){
    int n, m, s;
    cin >> n >> m >> s;
    int x, y;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        v[x].push_back(y);
    }
    dfc(s);
    for(int i = 0; i < n; i++){
        if(visited[i]){
            cout << i;
        }
    }

    return 0;
}
