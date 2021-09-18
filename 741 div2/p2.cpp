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

bool check(int num, string s){
	string str = to_string(num);
	char a = str[0];
	char b = str[1];
	bool first = false;
	for(int i = 0; i<s.size(); i++){
		if(!first && s[i] == a) first = true;
		else if(first && s[i] == b) return true;
	}
	return false;
}

void solve()
{
	int k;
	cin >> k;
	string s;
	cin >> s;
	for(int i = 0; i<k; i++){
		int x = s[i] - '0';
		if(x == 1 || x == 4 || x == 6 || x == 8 || x == 9){
			cout << 1 << endl;
			cout << x;
			return;
		}
	}
	
	if(check(22, s)){
		cout << 2 << endl;
		cout << 22;
		return;
	}
	if(check(32, s)){
		cout << 2 << endl;
		cout << 32;
		return;
	}
	if(check(52, s)){
		cout << 2 << endl;
		cout << 52;
		return;
	}
	if(check(72, s)){
		cout << 2 << endl;
		cout << 72;
		return;
	}
	if(check(33, s)){
		cout << 2 << endl;
		cout << 33;
		return;
	}
	if(check(25, s)){
		cout << 2 << endl;
		cout << 25;
		return;
	}
	if(check(35, s)){
		cout << 2 << endl;
		cout << 35;
		return;
	}
	if(check(75, s)){
		cout << 2 << endl;
		cout << 75;
		return;
	}
	if(check(27, s)){
		cout << 2 << endl;
		cout << 27;
		return;
	}
	if(check(57, s)){
		cout << 2 << endl;
		cout << 57;
		return;
	}
	if(check(77, s)){
		cout << 2 << endl;
		cout << 77;
		return;
	}
}