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
    typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
}
using namespace __gnu_pbds;


void solve() {
    int n; cin >> n;
    vector <pair <ll , ll>> arr(n);

    multiset <ll> a; multiset <ll> b;

    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i].first >> arr[i].second;

        a.insert(arr[i].first); b.insert(arr[i].second);
    }

    ll mx = LLONG_MIN , nn = 0;
    for (int i = 0 ; i < n ; i++) {
        a.extract(arr[i].first); b.extract(arr[i].second);

        //cout << *a.rbegin() << " " <<  *b.begin() << '\n';

        if (*a.rbegin() < *b.begin()) mx = max(mx , abs(*a.rbegin()  -  *b.begin()));

        a.insert(arr[i].first); b.insert(arr[i].second);
    }

    cout << (mx != LLONG_MIN ? mx : 0) << '\n';
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
