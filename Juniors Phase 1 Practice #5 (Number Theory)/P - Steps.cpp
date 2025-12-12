// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;


void solve() {
    ll n , m , x , y , q , a , b; cin >> n >> m >> x >> y >> q;


    ll ans = 0;
    while (q--) {
        cin >> a >> b;


        auto can = [=](ll mid) -> bool {
            ll A = (mid * a) + x , B = (mid * b) + y;



            return (A > 0 && A <= n && B > 0 && B <= m);
        };

        ll l = 0 , r = 1e9 + 1 , mid , cur = 0;

        while (l <= r) {
            mid = l + (r - l) / 2;

            if (can(mid)) {
                cur = mid;

                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }

        //cout << cur << '\n';

        x += (cur * a) , y += (cur * b);
        ans += cur;
    }


    cout << ans << '\n';
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
