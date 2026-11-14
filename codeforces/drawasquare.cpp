#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int l,r,d,u;
    cin >> l >> r >> d >> u;
    if(l == r && d == u && l == d){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
