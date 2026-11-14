#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
void solve(){
    int n;
    int cnt = 1;
    int ops = 0;
    cin >> n; 
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if (arr[i] == 0)
        {
            ops += 1;
        }else
        {
            cnt *= arr[i];
        }
    }
    if (cnt == -1)
    {
       ops += 2;
    }
    cout << ops << endl;
     

}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
