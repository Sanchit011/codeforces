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
	vector<long long int> arr(n, 0);
	int ones = 0;
	for(int i = 0; i<n; i++){
		cin >> arr[i];
		arr[i] = arr[i]%2;
		if(arr[i] == 1) ones++;
	}
	int zeroes = n - ones;
	if(abs(ones - zeroes) > 1){
		cout << -1;
		return;
	}
	vector<long long int> ref1(n, 0);
	vector<long long int> ref2(n, 1);
	for(int i = 1; i<n; i++){
		if(ref1[i-1] == 0) ref1[i] = 1;
		else ref1[i] = 0;
		if(ref2[i-1] == 0) ref2[i] = 1;
		else ref2[i] = 0;
	} 
	vector<long long int> ref = arr;
	long long int ans1 = 0, ans2 = 0;
	int start = 0;
	int end = 0;
	while(start < n && end < n){
		while(start < n && arr[start] == ref1[start]) start++;
		if(start >= n) break;
		end = start + 1;
		while(end < n && arr[end] == arr[start]) end++;
		if(end >= n){
			ans1 = INT_MAX;
			break;
		}
		ans1 += end - start;
		swap(arr[start], arr[end]);
		start++;
	}
	start = 0;
	end = 0;
	arr = ref;
	while(start < n && end < n){
		while(start < n && arr[start] == ref2[start]) start++;
		if(start >= n) break;
		end = start + 1;
		while(end < n && arr[end] == arr[start]) end++;
		if(end >= n){
			ans2 = INT_MAX;
			break;
		}
		ans2 += end - start;
		swap(arr[start], arr[end]);
		start++;
	}
	long long int ans = min(ans1, ans2);
	cout << ans;
}