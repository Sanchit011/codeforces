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
	string s1, s2;
	cin >> s1;
	cin >> s2;
	int ans = 0;
	for(int i = 0; i<n; i++){
		if(s2[i] == '1'){
			if(s1[i] == '0'){
				ans++;
			}
			else{
				if(i>0 && s1[i-1] == '1'){
					ans++;
					s1[i-1] = '0';
				}
				else if(i<n-1 && s1[i+1] == '1' && s2[i+1] == '1'){
					ans += 2;
					s1[i] = '0';
					s1[i+1] = '0';
					i++;
				}
				else if(i<n-1 && s1[i+1] == '1'){
					ans++;
					s1[i+1] = '0';
				}
			}

		}
	}
	cout << ans;
}