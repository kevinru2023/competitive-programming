#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n, score = 0; 
  cin >> n; 
  unordered_map<int, int> freq; 
  
  for(int i = 0; i < n ;i++){
    int tmp; 
    cin >> tmp; 
    freq[tmp]++; 
  }
  // so we can either take a subset of the arr and take it's sum, then add that to our score 
  // or we can either take the min element that is not of the subset and add that to our score 
  // after taking a subset of the arr we must delete those elements from the array.
  
  cout << score << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
}