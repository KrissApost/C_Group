#include<bits/stdc++.h>
using namespace std;
int a[100] = {};
void in(int arr[10][10], int x, int y){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin>>arr[i][j];
        }
    }
}
void out(int arr[][10],int x, int y){
    for(int i = 0; i < x; i++){
        int s = 0;
        for(int j = 0; j < y; j++){
            cout << setw(3) << arr[i][j];
            if(arr[i][j] % 2 == 0 && arr[i][j] != 2){
                s += arr[i][j];
            }
        }
        cout << setw(3) << s;
        cout << endl;
    }
}
void out2(int arr[][10],int x, int y){
    for(int i = 0; i < y; i++){
        int s = 0;
        for(int j = 0; j < x; j++){
            if(arr[j][i] % 2 != 0 && arr[j][i] != 3){
                s+=arr[j][i];
            }
        }
        a[i] = s;
    }
    for(int i = 0; i < y; i++){
        cout << setw(3) << a[i];
    }
}



int main(){
    int arr[10][10], x, y;
    cin >> x >> y;
    in(arr, x, y);
    out(arr, x, y);
    out2(arr, x, y);
    return 0;
}

