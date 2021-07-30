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
	string str = s;
	sort(str.begin(), str.end());
	int ans = 0;
	for(int i = 0; i<n; i++){
		if(s[i] != str[i]) ans++;
	}
	cout << ans;
}