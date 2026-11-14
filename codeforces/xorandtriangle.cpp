#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int a; // a in this case
    cin >> a;

    // Case 1: a is too small
    if(a < 5){
        cout << -1 << endl;
        return;
    }

    // Case 3: try b = a/2 (for even a) or varations for odd a
    int b;
    int c;
    if(a % 2 == 0){
        b = a/2;
        c = a ^ b;
        if(a + b > c && a + c > b && b +c > a){
            cout << b << endl;
            return;
        }
    }else{
        b = (a+1)/2;
        c = a ^ b;
        if(a + b > c && a + c > b && b + c > a){
            cout << b << endl;
            return;
        }else{
            b = (a-1)/2;
            c = a ^ b;
            if(a + b > c && a + c > b && b + c > a){
                cout << b << endl;
                return;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
