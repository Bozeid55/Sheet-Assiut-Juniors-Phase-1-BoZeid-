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
    typedef tree<ll,
            null_type,
            less<ll>,
    rb_tree_tag,
    tree_order_statistics_node_update> ordered_set;
}

using namespace __gnu_pbds;

void solve() {
   ll n , q , x; cin >> n;
   vector <ll> arr(n) , prx(n); input(arr); sort(all(arr));
   prx[0] = arr[0];
   for (int i = 1 ; i < n ; i++) {
        prx[i] += arr[i] + prx[i - 1];
   }

   cin >> q;
   while (q--) {
        cin >> x;
        ll l = 0 , r = n - 1  , mid , ans = -1;

        while (l <= r) {
            mid = l + (r - l) / 2;

            if (arr[mid] <= x) {
                ans = mid;

                l = mid + 1;
            }

            else {
                r = mid - 1;
            }
        }

        if (ans == -1) {
            cout << -1 << '\n';
            continue;
        }

        cout << ans + 1 << " " << prx[ans] << '\n';
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
