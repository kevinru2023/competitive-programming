#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    // goal is to maximze the number of coins collected 
    // can only collect coins from one casino and v[i][1] will represent our new number of coins 
    // our current num of coins k has to satisfy the condition that v[i][0] <= k <= v[i][2]
    vector<vector<int>> v(n, vector<int>(3)); // n casinos with 3 ints
    for(int i = 0; i < n; i++){
        cin >> v[i][0]; // l_i
        cin >> v[i][1]; // r_i
        cin >> v[i][2]; // real_i
    }
    sort(v.begin(), v.end(), [](auto& a, auto& b) {
        return a[0] < b[0];
    });
    
    for (int i = 0; i < n; i++) {
        if (v[i][0] > k) 
            break;
        k = max(k, v[i][2]);
    }

    cout << k << endl; 
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
}
