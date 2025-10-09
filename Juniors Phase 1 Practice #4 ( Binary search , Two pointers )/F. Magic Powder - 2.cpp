/// No problem, let's try again :)
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

namespace __gnu_pbds{
    typedef tree<ll,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
}
using namespace __gnu_pbds;

const ll N = 2e9 + 5;
ll n , k; vector <ll> arr(n) , brr(n);

bool can (ll mid) {
    ll cur = 0;

    for (int i = 0 ; i < n ; i++) {
        if (mid * arr[i] <= brr[i]) continue;

        cur += mid * arr[i] - brr[i];

        if (cur > k) {
            return false;
        }
    }

    return k >= cur;
}

void solve() {
    cin >> n >> k; arr.resize(n); brr.resize(n);
    input(arr); input(brr);


    ll l = 0 , r = N , mid , ans = 0;

    while (l <= r) {
        mid = l + (r - l) / 2;

        if (can(mid)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans << '\n';
}

int main() {
    ABo_ZeiD;

    //freopen("statvions.in" , "r", stdin);

    int t = 1;

    //cin >> t;
    while (t--)
        solve();

    return 0;
}
