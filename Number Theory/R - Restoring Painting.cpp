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
    ll n , a , b , c , d; cin >> n >> a >> b >> c >> d;

    int ans = 0;
    for (int i = 1 ; i <= n ; i++) {
        int A = b - c + i , B = a + b + i - c - d , C = a + i - d;

        if (A <= n && B <= n && C <= n && A > 0 && B > 0 && C > 0) {
            ans++;
        }

    }


    cout << (ans * n) << '\n';
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
