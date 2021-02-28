#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, u, v;
        cin >> n >> u >> v;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        int ans;
        if(n == 2){
            if(arr[0] == arr[1]){
                if(u >= v){ans = 2*v;}
                else{ans = u+v;}
            }
            else if(abs(arr[0]-arr[1]) == 1){ans = min(u, v);}
            else{ans = 0;}
        }
        else{
            int val = 0;
            for(int i = 0; i<n-1; i++){
                val = max(val, abs(arr[i] - arr[i+1]));
            }
            if(val == 0){
                if(u >= v){ans = 2*v;}
                else{ans = u+v;}
            }
            else if(val == 1){
                ans = min(u, v);
            }
            else{ans = 0;}
            
        }
        cout << ans << endl;
    }
    return 0;
}
