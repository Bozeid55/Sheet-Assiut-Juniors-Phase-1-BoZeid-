// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll n , k , a , m; map <ll , ll> mp;

bool can (int mid) {
    ll cur = 0 , cnt = 0;

    for (ll i = 1 ; i <= n && cnt < k ; i++) {
        if (mp[i] > 0 && mp[i] <= mid) {
            cur = 0;
        }
        else {
            cur++;

            if (cur >= a) {
                cnt++ , cur = 0 , i++;
            }
        }
    }
    /*
    cout << '\n';
    cout << cnt << '\n';
    */

    return (cnt < k);
}


void solve() {
    cin >> n >> k >> a >> m;
    vector <ll> arr(m);

    for (ll i = 0 ; i < m ; i++) {
        cin >> arr[i]; mp[arr[i]] = i + 1;
    }


    ll l = 1 , r = m , mid , ans = -1;

    while (l <= r) {
        mid = l + (r - l) / 2;

        if (can(mid)) {
           r = mid - 1; ans = mid;
        }

        else {
            l = mid + 1;
        }
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
