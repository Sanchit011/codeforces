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
	int n;
	cin >> n;
	vector<ll> arr(n, 0);
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	ll mod = 998244353;
	ll ans = 0;
	vector<ll> fact(n+1, 1);
	for(int i = 2; i<=n; i++){
		fact[i] = i*fact[i-1];
		fact[i] = fact[i]%mod;
	}
	ll mx = 0;
	for(int i = 0; i<n; i++){
		if(mx < arr[i]) mx = arr[i];
	}
	int good = 0;
	int bad = 0;
	int top = 0;
	for(int i = 0; i<n; i++){
		if(mx - arr[i] == 1) good++;
		if(mx - arr[i] == 0) top++;
	}
	if(good + top < 2) {
		cout << 0;
		return;
	}
	bad = n - top - good;
	ans = fact[n];
	ll val = 0;
	for(int i = 0; i<=bad; i++){
		ll x = (fact[n-1-i]*fact[i])%mod;
		x *=  (fact[bad]/(fact[i]*fact[bad-i]))%mod;
		x = x%mod;
		val += x;
		val = val%mod;
	}
	val = val*top;
	val = val%mod;
	if(good + bad == 0) val = 0;
	ans -= val;
	if(ans < 0) ans += mod;

	cout << ans;
}