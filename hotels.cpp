#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[n];
	for(int i = 0; i < n;i++){
		cin >> a[i];
	}
	int ma = 0, s2 = 0;
	int k = 0;
	for(int i = 0;i< n; i++){
		if(s2 + a[i] <= m){
			s2 += a[i];
        }else{
            while(s2 + a[i] > m){
                s2 -= a[k];
                k++;
            }
            s2 += a[i];
        }
        if(s2 > ma){
            ma = s2;
        }
	}
	cout << ma;
	return 0;
}
