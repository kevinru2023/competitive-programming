#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n, c, ans, m; 
    cin >> n >> c; // read in n trash bags and c
    vector<long long> a(n);
  
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }
    sort(a.begin(), a.end(), greater<long long>()); // sort in descending order
    ans = 0; 
    m = 0; 
    for(int i = 0; i < n; i++){
        if((a[i] * (1 << m)) <= c){
            ans++; 
            m++;
        }
    }
    cout << n-ans << endl; 
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; // Number of test cases
    cin >> t; 
    while(t--){
        solve();
    }
    
    return 0;
}