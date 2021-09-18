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
	string s;
	cin >> s;
	for(int i = 0; i<n-1; i++){
		if(s[i] != s[i+1]){
			cout << i+1 << " " << i+2;
			return;
		}
	}
	cout << -1 << " " << -1;
	return;
}