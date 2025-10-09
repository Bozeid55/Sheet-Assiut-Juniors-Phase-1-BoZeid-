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

ll n , s , mx = LLONG_MIN , mn = LLONG_MAX;

bool can (ll mid , vector <ll> arr) {
    ll cnt = 0 , sum = 0;

    for (int i = 0 ; i < n ; i++) {
        arr[i] += (i + 1) * mid;
    }

    sort(all(arr));

    int i = 0;
    while (cnt < mid) {
        if (sum + arr[i] <= s) {
            cnt++; sum += arr[i];
            i++;
        }
        else {
            break;
        }
    }

    if (cnt >= mid && sum <= s) {

        if (cnt == mx) {
            mn = min(mn , sum);
        }

        else if (cnt > mx) {
            mx = cnt , mn = sum;
        }


        return true;
    }

    return false;
}



void solve() {
    cin >> n >> s;
    vector <ll> arr(n); input(arr);


    ll l = 0 , r = n , mid , Mx = LLONG_MIN , Mn = LLONG_MAX;

    while (l <= r) {
        mid = l + (r - l) / 2;

        if (can(mid , arr)) {
            l = mid + 1;
        }

        else {
            r = mid - 1;
        }
    }


    Mx = mx; Mn = mn;



    cout << Mx << " " << Mn << '\n';
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
