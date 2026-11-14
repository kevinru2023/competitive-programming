#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
void solve() {
    int n;
    int maxdiff = INT_MIN;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (size_t i = 0; i < n; i += 2)
    {
       int diff = abs(arr[i] - arr[i+1]);
       maxdiff = max(maxdiff, diff);
    }
    cout << maxdiff << endl;
    
}

int main() {
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
