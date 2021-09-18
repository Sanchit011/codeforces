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
	vi arr(n, 0);
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	vi v(32, 0);
	for(auto x : arr){
		int index = 0;
		while(x > 0){
			v[index] += x%2;
			x = x/2;
			index++;
		}
	}
	int ans = 0;
	for(int i = 0; i<32; i++){
		if(v[i] ==n){
			ans += pow(2, i);
		}
	}
	cout << ans;
}