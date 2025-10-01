#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    string s; cin >> s;

    vector <int> arr(s.length()) , prx(s.length() + 1);
    for (int i = 1 ; i < s.length() ; i++) {
        if (s[i] == s[i-1]) {
            arr[i]++;
        }
    }

    for (int i = 1 ; i <= s.length() ; i++) {
        prx[i] += prx[i-1] + arr[i-1];
    }

    int q; cin >> q;
    while (q--) {
        int l , r; cin >> l >> r;
        cout << prx[r] - prx[l] << endl;
    }

}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
