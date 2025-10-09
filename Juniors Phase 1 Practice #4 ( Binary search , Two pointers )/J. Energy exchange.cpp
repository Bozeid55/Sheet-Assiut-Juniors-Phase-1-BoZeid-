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

int n , k;
bool can (double mid , vector <double> arr) {
    double ans = 0 , tmp;

    for (int i = 0 ; i < n ; i++) {
        if (arr[i] > mid) {
            double cur = arr[i] - mid;
            ans += cur - ((cur * k) / 100.0);
        }

        else {
             if (mid - arr[i] > ans) {
                return false;
             }

            ans -= (mid - arr[i]);
        }
    }

    return true;
}



void solve() {
    cin >> n >> k;
    vector <double> arr(n); input(arr);
    sort(all(arr)); reverse(all(arr));

    double l = 0 , r = 1005 , mid , ans = 0;
    int cnt = 400;


    while (cnt-- && l <= r) {
        mid = l + (r - l) / 2;

        if (can(mid , arr)) {
            ans = max(ans , mid);
            l = mid;
        }
        else {
            r = mid;
        }
    }


    cout << fixed << setprecision(9) << ans << '\n';
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
