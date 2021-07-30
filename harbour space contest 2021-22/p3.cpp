#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define vi vector<int>

int ans;

void solve();

void dfs(string s, int odd, int even, int curr, int a, int b){
	if(curr == s.size()) return; 
	if(curr%2 == 0){
		if(s[curr] == '1'){
			even++;
			a--;
			if(even - odd > b){
				int x = s.size()-a-b;
				ans = min(ans, x);
				return;
			}
			else{
				dfs(s, odd, even, curr+1, a, b);
			}
		}
		else if(s[curr] == '0'){
			a--;
			if(odd - even > a){
				int x = s.size()-a-b;
				ans = min(ans, x);
				return;
			}
			else{
				dfs(s, odd, even, curr+1, a, b);
			}
		}
		else{
			a--;
			if(even + 1 - odd > b){
				int x = s.size()-a-b;
				ans = min(ans, x);
				return;
			}
			if(odd - even > a){
				int x = s.size()-a-b;
				ans = min(ans, x);
				return;
			}
			dfs(s, odd, even, curr+1, a, b);
			dfs(s, odd, even+1, curr+1, a, b);
		}
	}
	else{
		if(s[curr] == '1'){
			odd++;
			b--;
			if(odd - even > a){
				int x = s.size()-a-b;
				ans = min(ans, x);
				return;
			}
			else{
				dfs(s, odd, even, curr+1, a, b);
			}
		}
		else if(s[curr] == '0'){
			b--;
			if(even - odd > b){
				int x = s.size()-a-b;
				ans = min(ans, x);
				return;
			}
			else{
				dfs(s, odd, even, curr+1, a, b);
			}
		}
		else{
			b--;
			if(odd + 1 - even > a){
				int x = s.size()-a-b;
				ans = min(ans, x);
				return;
			}
			if(even - odd > b){
				int x = s.size()-a-b;
				ans = min(ans, x);
				return;
			}
			dfs(s, odd, even, curr+1, a, b);
			dfs(s, odd+1, even, curr+1, a, b);
		}
	}
}

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
	string s;
	cin >> s;
	ans = 10;
	int n = 10;
	dfs(s, 0, 0, 0, 5, 5);
	cout << ans;
}