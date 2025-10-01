#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    ll n , k; cin >> n >> k;
    vector <ll> arr(n); map <ll , ll> frq;

    ll tmp , ans = 0;
    for (int i =0 ; i < n ; i++) {
        cin >> arr[i];
        tmp = k - arr[i];
        ans += frq[tmp];

        frq[arr[i]]++;
    }

    cout << ans << endl;
}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
