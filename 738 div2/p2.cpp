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
	int blank = 0;
	for(int i = 0; i<n; i++){
		if(s[i] == '?') blank++;
	}
	if(blank == n){
		string ans = "";
		for(int i = 0; i<n; i++){
			if(i%2 == 0) ans += "B";
			else ans += "R";
		}
		cout << ans;
		return;
	}
	char prev = '1';
	for(int i = 0; i<n; i++){
		if(s[i] != '?'){
			prev = s[i];
		}
		else{
			if(prev == '1') continue;
			if(prev == 'B'){
				s[i] = 'R'; prev = 'R';
			} 
			else {
				s[i] = 'B'; prev = 'B';
			}
		}
	}
	prev = '1';
	for(int i = n-1; i>=0; i--){
		if(s[i] != '?'){
			prev = s[i];
		}
		else{
			if(prev == '1') continue;
			if(prev == 'B'){
				s[i] = 'R'; prev = 'R';
			} 
			else {
				s[i] = 'B'; prev = 'B';
			}
		}
	}
	cout << s;
}