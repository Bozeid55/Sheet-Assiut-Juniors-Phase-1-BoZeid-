// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;


void solve() {
    ll a , b; cin >> a >> b;

    bitset <64> x = a , y = b;

    for (int i = 0 ; i < 64 ; i++) {
        bitset <64> cur = x;

        if (cur[i] == y[i]) {
            int biit = 5;

            if (cur[i] == 0) {
                cur[i] = 1; biit = 1;
            }

            else {
                cur[i] = 0; biit = 0;
            }

            ll num = 0;
            for (int j = 0 ; j < 64 ; j++) {
                num += cur[j] * (1ll << j);
            }

            if (num > a && num < b) {
                x[i] = biit;
            }
        }
    }
    
    for (int i = 0 ; i < 64 ; i++) {
        bitset <64> cur = y;

        if (cur[i] == x[i]) {
            int biit = 5;

            if (cur[i] == 0) {
                cur[i] = 1; biit = 1;
            }

            else {
                cur[i] = 0; biit = 0;
            }

            ll num = 0;
            for (int j = 0 ; j < 64 ; j++) {
                num += cur[j] * (1ll << j);
            }

            if (num > a && num < b) {
                y[i] = biit;
            }
        }
    }
    

    ll X = 0 , Y = 0;

    for (int i = 0 ; i < 64 ; i++) {
        X += x[i] * (1ll << i);
        Y += y[i] * (1ll << i);
    }


    cout << (X ^ Y) << '\n';
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
