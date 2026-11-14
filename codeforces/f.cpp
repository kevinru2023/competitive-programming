#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";


int main() {
    int n;
    cin >> n;
    if (n % 2 == 0){
        cout << n << endl; 
    }else if (n == 1){
        cout << 0 << endl; 
    } else{
        cout << n-1 <<endl; 
    }
    
    return 0;
}
