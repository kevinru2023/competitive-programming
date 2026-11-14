#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";

int main() {
    string s;
    string t;
    cin >> s >> t; 
    set<char> vowels = {'a', 'e', 'i', 'o', 'u'}; 
    int n = s.length(); 
    int m = t.length(); 
    // check lengths first 
    if(n != m){
        cout << "No" << endl;
        return 0; 
    }
    for(int i = 0; i < n; i++){
        if(vowels.find(s[i]) != vowels.end() && vowels.find(t[i]) != vowels.end()){
            continue; 
        } else if (vowels.find(s[i]) == vowels.end() && vowels.find(t[i]) == vowels.end()){
            continue; 
        }
        cout << "No" << endl; 
        return 0;
    }
    cout << "Yes" << endl; 
    return 0;
}
