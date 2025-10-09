#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    int n , m; cin >> n >> m;
    map <ll , ll> mp;

    ll x;
    for (int i = 0 ; i < n ; i++) {
        cin >> x; mp[x]++;
    }
    for (int i = 0 ; i < m ; i++) {
        cin >> x; mp[x]++;
    }

    ll cnt = 0;
    for (auto [a , b] : mp) {
        if (b == 2) cnt++;
    }


    cout << cnt << '\n';
}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
