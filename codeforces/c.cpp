#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";


int main() {
    int n, k;
    cin >> n >> k; 
    int people = 0; 
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        if(tmp + k <= 5){
            people++; 
        }
    } 
    cout << people / 3 << endl;  
    return 0;
}
