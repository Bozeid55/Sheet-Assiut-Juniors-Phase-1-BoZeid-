// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

vector <pair <ll , ll>> primeFactor (ll n) {
    vector <pair <ll , ll>> ret;

    for(ll i = 2 ; i*i <= n ; i++) {
        if (n % i == 0) {
            ll c = 0;
            
            while (n%i == 0) {
                n /= i; c++;
            }
            
            ret.push_back({i, c});
        }
    }
    
    if (n > 1) ret.push_back({n , 1});
    
    return ret;
}


void solve() {
    string s;

    while (getline(cin , s)) {
        if (s == "0") return;

        vector <ll> a , b;

        bool flag = true;

        string num = "";
        for (auto i : s) {
            if (i == ' ') {
                if (flag) {
                    a.push_back(stoll(num)); num = "";
                    flag = false;
                    continue;
                }
                else {
                    b.push_back(stoll(num)); num = "";
                    flag = true;
                }
            }

            else {
                num += i;
            }
        }
        b.push_back(stoll(num));


        ll ans = 1;
        for (int i = 0 ; i < a.size() ; i++) {
            ans *= pow(a[i] , b[i]);
        }

        ans--;

        vector <pair <ll , ll>> primes = primeFactor(ans);

        sort(all(primes), greater <pair <ll , ll>>());


        int sz = primes.size() - 1;
        for (int i = 0 ; i <= sz ; i++) {
            if (i == sz) {
                cout << primes[i].first << " " << primes[i].second << '\n';
                continue;
            }
            cout << primes[i].first << " " << primes[i].second << " ";
        }
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
