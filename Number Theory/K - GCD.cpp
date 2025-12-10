// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

const ll N = 1073741824;


void solve() {
    int x;

    while (cin >> x) {
        if (x == 0) break;

        ll ans = 0;
        for(int i = 1 ; i <= x ; i++) {
            for(int j = i + 1 ; j <= x ; j++) {
                ans += __gcd(i , j);
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
