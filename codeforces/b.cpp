#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
void solve(){
    int n; 
    string s; 
    cin >> n >> s;
    int count = 0; 
    int l = 0;
    int r = n - 1; 
    while (l < r)
    {
        if(s[l] == s[r]){
            break; 
        }
        count += 2; 
        l++; 
        r--; 
    }
    if(count > 0){
        cout << n - count << endl; 
    }else{
        cout << n << endl; 
    }
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
