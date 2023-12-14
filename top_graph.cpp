#include <bits/stdc++.h>
using namespace std;
int arr[10000];
void func(vector<int>* v, int k) {
    stack<int> s;
    bool vis[10000];
    int r = k - 1;
    for(int i = k - 1; i >= 0; i--) {
        if(!vis[i]){
            s.push(i);
            vis[i] = true;
            while(!s.empty()) {
                int t = s.top();
                bool b = 0;
                for(int y = 0; y < v[t].size(); y++) {
                    if(!vis[v[t][y]]) {
                        vis[v[t][y]] = 1;
                        s.push(v[t][y]);
                        b = 1;
                    }
                }
                if(b == 0) {
                    arr[r] = t;
                    r--;
                    s.pop();
                }
            }
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v[n+1];
    int x, y;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        v[x].push_back(y);
    }
    func(v, m);
    for(int i = 1; i < n + 1; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
