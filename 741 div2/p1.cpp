#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define vi vector<int>

void solve();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
        cout << "\n";
    }
	return 0;
}

void solve()
{
	ll l, r;
	cin >> l >> r;
	ll mn = r/2 + 1;
	ll val;
	if(l <= mn){
		cout << r%mn;
	}
	else{
		cout << r%l;
	}
	return;
}