#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    int tmp;

    stack<int> s;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        s.push(tmp);
    }

    int sum = 0;
    while(s.size() > 1){
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();

        sum = a + b - 1;
        s.push(sum);
    }
    cout << s.top() << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
