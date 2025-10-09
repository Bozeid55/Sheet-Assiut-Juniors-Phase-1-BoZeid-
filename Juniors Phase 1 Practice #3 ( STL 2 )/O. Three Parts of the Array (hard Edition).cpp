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
    int n; cin >> n;
    vector <ll> arr(n) , prx(n) , sfx(n);

    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
        prx[i] = arr[i]; sfx[i] = arr[i];
    }

    for (int i = 1 ; i < n ; i++) {
        prx[i] += prx[i - 1];
    }

    for (int i = n - 2 ; i >= 0 ; i--) {
        sfx[i] += sfx[i + 1];
    }


    map <ll , ll> suf;
    for (int i = 0 ; i < n ; i++) {
        suf[sfx[i]]++;
    }


    ll mx = LLONG_MIN;

    for (int i = 0 ; i < n ; i++) {
        suf[sfx[i]]--;

        if (suf[prx[i]] > 0) {
            mx = max(mx , prx[i]);
        }
    }


    cout << mx << '\n';
}

int main() {
    ABo_ZeiD;


    //freopen("stations.in" , "r", stdin);

    int t = 1;

    //cin >> t;
    while (t--)
        solve();

    return 0;
}
