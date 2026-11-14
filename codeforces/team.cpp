#include <bits/stdc++.h>
using namespace std;

int total = 0;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b + c >= 2) {
        total++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
    cout << total << endl;
    return 0;
}
