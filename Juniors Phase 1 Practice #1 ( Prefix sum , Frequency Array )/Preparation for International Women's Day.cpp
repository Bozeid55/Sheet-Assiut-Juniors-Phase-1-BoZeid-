#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    int n , k; cin >> n >> k;

    ll rem[200005] = {0};
    ll x = 0;
    for (int i =0 ; i < n ; i++) {
        cin >> x; rem[x%k]++;
    }

    ll cur = 0 , ans = 0;
    for (int i =0 ; i <= k / 2 && i < n ; i++) {
        cur = min(rem[i] , rem[k - i]);

        if (i == 0 || i == k - i) {
            cur = rem[i]; cur /= 2;
        }

        ans += cur;
    }

    cout << ans * 2 << endl;
}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
