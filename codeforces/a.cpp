#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
void solve(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int count = 0;
    int i = 0; 
    while(n > 0){
        i = i % 3; 
        if(i == 0){
            n -= a; 
        }else if (i == 1){
            n -= b;
        } else if (i == 2){
            n -= c; 
        }
        count += 1; 
    }
    cout << count << endl; 
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
