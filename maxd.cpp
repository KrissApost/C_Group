#include<bits/stdc++.h>
using namespace std;
int a[300001];
bool fl[100001];
int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n; i++){
        cin >> a[i];
    }
    long long l = 1, m = 0, ml = 1, mr = 1;
    for(int i = 1; i <= n; i++){
        if(fl[a[i]] == 1){
            while(fl[a[i]] != 0){
                fl[a[l]] = 0;
                l++;
            }
        }
        fl[a[i]] = 1;
        if(i - l + 1 > m){
            m = i - l + 1;
            ml = l;
            mr = i;
        }
    }
    cout<<m<<endl;
    for(int i=ml;i<=mr;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
