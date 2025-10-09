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

const ll N = 1e9 + 7;

void solve() {
   ll a , b , c , n; cin >> a >> b >> c >> n;

    priority_queue <ll> x; priority_queue<ll,vector<ll>,greater<ll>> y;
    x.push(1);

    ll ans = 1;
    for (ll i = 2 ; i <= n ; i++) {
        ll m = x.top() , cur = (((a*m) % N) + ((b * i) % N) + (c%N)) % N;

        if (cur <= x.top()) x.push(cur);
        else y.push(cur);


        if (x.size() - 1 > y.size()) {
            y.push(x.top()); x.pop();
        }

        else if (x.size() < y.size()) {
            x.push(y.top()); y.pop();
        }


        ans += cur;
    }


    cout << ans << '\n';
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
