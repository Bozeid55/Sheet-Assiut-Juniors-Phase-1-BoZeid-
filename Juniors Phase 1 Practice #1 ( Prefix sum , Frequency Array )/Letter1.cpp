#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    string s1 , s2; 
    getline(cin , s1); getline(cin , s2);
    
    map <char , int> mp;
    for (char c : s1) {
        if (c != ' ') mp[c]++;
    }
    
    bool flag = true;
    for (char i : s2) {
        if (i == ' ') continue;
        if (mp[i]) mp[i]--;
        else {
            flag = false; break; 
        }
    }
    
    cout << (flag ? "YES" : "NO");
}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
