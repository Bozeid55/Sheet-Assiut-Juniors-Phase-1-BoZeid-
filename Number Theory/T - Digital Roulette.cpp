// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

ll power(ll x, ll k , ll mod) {
	ll ret = 1;

	while (k){
		if (k & 1) ret = (ret*x) % mod;
		k >>= 1; x = (x*x) % mod;
	}

	return ret;
}

void solve() {
    int n , m;

    while (cin >> n >> m) {
        if (n == 0 && m == 0) return;

        int k; cin >> k;
        vector <ll> num(k + 1); input(num); map <ll , int> mp;

        auto Q = [&] (ll x) -> ll {
            ll cnt = 0;

            for (int i = 0 ; i <= k ; i++) {
                cnt += ((num[i]% (n + 1)) * (power(x , i , (n + 1))% (n + 1))); cnt %=  (n + 1);
            }

            return cnt;
        };

        ll ans = 0;
        for (int i = 0 ; i <= m ; i++) {
            ll cur = Q(i);

            if (mp[cur] == 0) {
                mp[cur]++; ans++;
            }
        }

        cout << ans << '\n';
    }



}


int main() {
    ABo_ZeiD;

    //freopen("smallest.in" , "r", stdin);

    int t = 1;

    //cin >> t;
    while (t--)
        solve();


    return 0;
}
