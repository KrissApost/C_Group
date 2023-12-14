#include <bits/stdc++.h>
using namespace std;
int arr[20000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    arr[1] = 1;
    for(int i = 1; i < s.size(); i++){
        if(s[i] < s[i-1]){
            arr[i+1] = arr[i] + 1;
        }else{
            arr[i+1] = arr[i];
        }
    }
    int k;
    cin>> k;
    for(int i = 0; i < k; i++){
        int a, b;
        cin >> a >> b;
        if(arr[a] != arr[a-1]){
            cout << arr[b] - arr[a-1];
        }else{
            cout << arr[b] - arr[a-1] + 1;
        }
        cout << "\n";
    }

    return 0;
}
