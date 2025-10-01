/// No problem, let's try again :)
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;
const ll mod = (1e9) + 7;

ll add(ll a,ll b) {
    return ((a%mod)+(b%mod))%mod;
}

void solve() {
    int x; string s; cin >> x >> s;

    ll ans = s.length();

    int i = 0;
    while (i < x) {
        if (s[i] != '1' && s.length() < x) {
            string tmp = s.substr(i + 1);

            ans = add(ans , ((s[i] - '0' - 1)  *  tmp.length()));

            int cur = (s[i] - '0' - 1) * tmp.length() , j = 0;

            while (cur-- && s.length() < x) {
                s += tmp[j % tmp.length()];
                j++;
            }

        }

        else if (s[i] != '1') {
            ans = add(ans , (s[i] - '0' -1) * (ans - i - 1 + mod) % mod);
        }

        i++;
    }

    cout << ans << '\n';

}

int main() {
    ABo_ZeiD;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
