// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;


vector <ll> divisors (ll n) {
    vector <ll> ret;

    for(int i = 1 ; i*i <= n ; i++) {
        if(n % i == 0) {
            ret.push_back(i);

            if (i*i != n) {
                ret.push_back(n/i);
            }
        }
    }

    return ret;
}

ll lcm (ll a , ll b) {
    return a*b / __gcd(a , b);
}

void solve() {
    ll a;

    while (cin >> a) {
        if (a == 0) return;

        int cnt = 0;

        vector <ll> divs = divisors(a); sort(all(divs));


        /*
        for (auto i : divs) {
            cout << i << " ";
        }
        */

        for (int i = 0 ; i < divs.size() ; i++) {
            for (int j = i ; j < divs.size() ; j++) {
                if (lcm(divs[i] , divs[j]) == a) cnt++;
            }
        }

        cout << a << " " << cnt << '\n';
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
