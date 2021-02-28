#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int arr[n];
    int count = 0;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == 1){count++;}
    }
    while(q--){
        int t, k;
        cin >> t >> k;
        if(t == 1){
            k--;
            if(arr[k] == 1){count--; arr[k] = 0;}
            else{count++; arr[k] = 1;}
        }
        else{
            if(k > count){cout << 0 << endl;}
            else{cout << 1 << endl;}
        }
    }
	return 0;
}
