#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
void solve() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> horizontal(n);
    vector<int> vertical(m);
    // do I even have to read this in? nope but cin.ignore doesn't fucking work
    for (int i = 0; i < n; i++) {
        cin >> horizontal[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> vertical[i];
    }
    cout << m + n << endl;
}

int main() {
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
