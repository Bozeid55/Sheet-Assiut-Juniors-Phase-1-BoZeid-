// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

ll divs (ll n) {
    ll cnt = 0;

    for(int i = 1 ; i*i <= n ; i++) {
        if(n % i == 0) {
            cnt++;

            if (i*i != n) {
                cnt++;
            }
        }
    }

    return cnt;
}

void solve() {
    int n; cin >> n;

    while (n--) {
        ll a , b , mx = LLONG_MIN , idx = 0; cin >> a >> b;

        for (ll i = a ; i <= b ; i++) {
            ll cur = divs(i);

            if (cur > mx) {
                idx = i; mx = cur;
            }
        }

        cout << "Between " << a <<" and " << b << ", " << idx << " has a maximum of " << mx << " divisors." << '\n';
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
