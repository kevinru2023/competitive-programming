#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
void solve(){
    int n, goal;
    cin >> n >> goal;
    vector<int> arr(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == goal)
        {
            cnt += 1;
        }
        
    }
    cout << cnt << endl;
    
    
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
