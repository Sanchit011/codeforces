#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, u, r, d, l;
        cin >> n >> u >> r >> d >> l;
        bool ans = true;
        
        if(u == n || d == n){
            if(r<1 || l<1){ans = false;}
        }
        if(r == n || l == n){
            if(u<1 || d<1){ans = false;}
        }
        if(u == n && d == n){
            if(r<2 || l<2){ans = false;}
        }
        if(r == n && l == n){
            if(u<2 || d<2){ans = false;}
        }
        
        if(u+d == (2*n)-1){
            if(r<2 && l<2){ans = false;}
            if(r<1 || r<1){ans = false;}
        }
        if(r+l == (2*n)-1){
            if(d<2 && u<2){ans = false;}
            if(d<1 || u<1){ans = false;}
        }
        
        if(u == n-1 && d == n-1){
            if(l+r < 2){ans = false;}
        }
        if(r == n-1 && l == n-1){
            if(u+d < 2){ans = false;}
        }
        
        if(u == n-1 || d == n-1){
            if(r+l<1){ans = false;}
        }
        if(r == n-1 || l == n-1){
            if(u+d<1){ans = false;}
        }
        
        
        
        if(ans){cout << "YES" << endl;}
        else{cout << "NO" << endl;}
        
    }
	return 0;
}
