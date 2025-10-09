#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    string s , x; cin >> s;
    map <string , int> mp;

    for (int i = 0 ; i < 10 ; i++) {
        cin >> x;
        mp[x] = i;
    }

    int cnt = 8 , a = 0 , b = 10;

    while (cnt--) {
        x = s.substr(a , b);

        cout << mp[x];
        a += 10 ;
    }


}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
