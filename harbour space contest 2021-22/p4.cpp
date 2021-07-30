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
	string s, t;
	cin >> s;
	cin >> t;
	int n = s.size();
	int m = t.size();
	if(m > n){
		cout << "NO";
		return;
	}
	int i = n-1;
	int j = m-1;
	while(i>=0 && j>=0){
		if(s[i] == t[j]){
			i--;
			j--;
		}
		else{
			i -= 2;
		}
	}
	if(j < 0){cout << "YES";}
	else{cout << "NO";}
}