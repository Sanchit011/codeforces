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
	if(arr[n-1] == 0){
		for(int i = 1; i<=n+1; i++){
			cout << i << " ";
		}
		return;
	}
	if(arr[0] == 1){
		cout << n+1 << " ";
		for(int i = n; i>0; i--){
			cout << i << " ";
		}
		return;
	}
	int index = -1;
	for(int i = 0; i<n-1; i++){
		if(arr[i] == 0 && arr[i+1] == 1){
			index = i;
			break;
		}
	}
	index++;
	for(int i = 1; i<=index; i++){
		cout << i << " ";
	}
	cout << n+1 << " ";
	for(int i = index+1; i<=n; i++){
		cout << i << " ";
	}
	return;
}