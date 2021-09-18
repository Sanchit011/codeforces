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
	long long int c, d;
	cin >> c >> d;
	if(c == 0 && d ==0 ){
		cout << 0;
		return;
	}
	if(c + d < 0 || abs(c + d) % 2 == 1){
		cout << -1;
		return;
	}
	if( c == d) {
		cout << 1;
		return;
	}
	cout << 2;
	return;
}