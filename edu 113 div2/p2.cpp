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
    }
	return 0;
}

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int noLoss = 0;
	int oneWin = 0;
	vector<int> arr;
	for(int i = 0; i<n; i++){
		if(s[i] == '1') noLoss++;
		else {
			oneWin++;
			arr.push_back(i);
		}
	}
	if(oneWin == 1 || oneWin == 2) {
		cout << "NO" << endl;
		return;
	}
	vector<vector<char>> ans(n, vector<char>(n, '='));
	if(oneWin > 0){
		for(int i = 0; i<arr.size() - 1; i++){
			ans[arr[i]][arr[i+1]] = '+';
			ans[arr[i+1]][arr[i]] = '-';
		}
		ans[arr[arr.size()-1]][arr[0]] = '+';
		ans[arr[0]][arr[arr.size()-1]] = '-';
	}
	for(int i = 0; i<n; i++){
		ans[i][i] = 'X';
	}
	cout << "YES" << endl;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			cout << ans[i][j];
		}
		cout << endl;
	}
}