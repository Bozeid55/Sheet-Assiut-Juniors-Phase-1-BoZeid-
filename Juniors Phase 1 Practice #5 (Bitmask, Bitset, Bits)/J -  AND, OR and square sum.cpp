// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

bool knowBit(ll n , int i) {
    return (n >> i) & 1;
}

void solve() {
    int n; cin >> n;
    vector <ll> arr(n) , frq(32 , 0);

    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];

        for (int j = 0 ; j < 32 ; j++) {
            if (knowBit(arr[i] , j)) frq[j]++;
        }
    }

    ll ans = 0;
    while (true) {
        bitset <32> cur = 0;

        bool flag = true;
        for (int i = 0 ; i < 32 ; i++) {
            if (frq[i] > 0) {
                cur[i] = 1; frq[i]--;
                flag = false;
            }
        }

        ll num = 0;
        for (int i = 0 ; i < 32 ; i++) {
            num += cur[i] * (1ll << i);
        }

        ans += pow(num , 2);

        if (flag) break;
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
