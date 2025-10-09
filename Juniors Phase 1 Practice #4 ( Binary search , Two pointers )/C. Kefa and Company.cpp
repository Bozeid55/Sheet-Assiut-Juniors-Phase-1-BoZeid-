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

void solve() {
    ll n , k , ans = 0; cin >> n >> k;

    vector <pair <ll , ll>> arr(n);


    ll mx = LLONG_MIN , idx = 0;
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(all(arr));

    ll l = 0 , r = 0 , cur = 0;

    while (l < n && r < n) {
        if (arr[r].first - arr[l].first < k) {
            cur += arr[r].second;
            r++;
        }
        else {
            ans = max(ans , cur);
            cur -= arr[l].second;
            l++;
        }
    }
    ans = max(ans , cur);



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
