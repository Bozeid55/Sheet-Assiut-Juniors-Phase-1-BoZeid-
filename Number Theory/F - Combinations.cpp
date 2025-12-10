// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;


ll nCr(ll n, ll r){
    double sum = 1;

    for (ll i = 1; i <= r; i++){

        sum = sum * (n - r + i) / i;
    }

    return (ll)sum;
}

void solve() {
    ll a , b;

    while (cin >> a >> b) {
        if (a == 0 && b == 0) return;


        cout << a << " things taken " << b << " at a time is " << nCr(a ,b) << " exactly." << '\n';
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
