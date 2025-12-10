// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;


ld power(ll x, ll k , ll mod) {
	ll ret = 1;
	while (k){
		if (k & 1) ret = (ret*x) % mod;
		k >>= 1; x = (x*x) % mod;
	}
	return ret;
}

void solve() {
    ll a , b , m; string s;

    while (cin >> a >> b >> m) {
        getline(cin, s);

        cout << (ld)power(a , b , m) << '\n';
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
