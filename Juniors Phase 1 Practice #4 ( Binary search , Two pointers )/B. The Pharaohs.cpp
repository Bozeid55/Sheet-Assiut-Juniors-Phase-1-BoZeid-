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
    ll n; cin >> n;

    ll l = 1 , r = 1e10 , mid;

    while (l <= r) {
        mid = l + (r - l) / 2;

        if (mid >= n || (mid*(mid + 1) / 2) >= n) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }


    cout << r + 1 << '\n';
}

int main() {
    ABo_ZeiD;

    //freopen("statvions.in" , "r", stdin);

    int t = 1;

    cin >> t;
    while (t--)
        solve();

    return 0;
}
