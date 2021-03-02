#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int a = 0;
        int b = 0;
        int c = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == 'A'){a++;}
            else if(s[i] == 'B'){b++;}
            else{c++;}
        }
        bool ans;
        if(s[0] == 'A'){
            ans = false;
            int count = 0;
            for(int i = 0; i<n; i++){
                if(s[i] == 'A'){count++;}
                else if(s[i] == 'B'){count--;}
                else{count--;}
                if(count < 0){break;}
            }
            if(count == 0){ans = true;}
            else{
                count = 0;
                for(int i = 0; i<n; i++){
                    if(s[i] == 'A'){count++;}
                    else if(s[i] == 'B'){count++;}
                    else{count--;}
                    if(count < 0){break;}
                }
                if(count == 0){ans = true;}
                else{
                    count = 0;
                    for(int i = 0; i<n; i++){
                        if(s[i] == 'A'){count++;}
                        else if(s[i] == 'B'){count--;}
                        else{count++;}
                        if(count < 0){break;}
                    }
                    if(count == 0){ans = true;}
                }
            }
        }
        if(s[0] == 'B'){
            ans = false;
            int count = 0;
            for(int i = 0; i<n; i++){
                if(s[i] == 'B'){count++;}
                else if(s[i] == 'C'){count--;}
                else{count--;}
                if(count < 0){break;}
            }
            if(count == 0){ans = true;}
            else{
                count = 0;
                for(int i = 0; i<n; i++){
                    if(s[i] == 'B'){count++;}
                    else if(s[i] == 'C'){count++;}
                    else{count--;}
                    if(count < 0){break;}
                }
                if(count == 0){ans = true;}
                else{
                    count = 0;
                    for(int i = 0; i<n; i++){
                        if(s[i] == 'B'){count++;}
                        else if(s[i] == 'C'){count--;}
                        else{count++;}
                        if(count < 0){break;}
                    }
                    if(count == 0){ans = true;}
                }
            }
        }
        if(s[0] == 'C'){
            ans = false;
            int count = 0;
            for(int i = 0; i<n; i++){
                if(s[i] == 'C'){count++;}
                else if(s[i] == 'A'){count--;}
                else{count--;}
                if(count < 0){break;}
            }
            if(count == 0){ans = true;}
            else{
                count = 0;
                for(int i = 0; i<n; i++){
                    if(s[i] == 'C'){count++;}
                    else if(s[i] == 'A'){count++;}
                    else{count--;}
                    if(count < 0){break;}
                }
                if(count == 0){ans = true;}
                else{
                    count = 0;
                    for(int i = 0; i<n; i++){
                        if(s[i] == 'C'){count++;}
                        else if(s[i] == 'A'){count--;}
                        else{count++;}
                        if(count < 0){break;}
                    }
                    if(count == 0){ans = true;}
                }
            }
        }
        if(ans){cout << "YES" << endl;}
        else{cout << "NO" << endl;}
    }
	return 0;
}
