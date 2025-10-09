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
    ll n , x , y; cin >> n >> x >> y;
    vector <ll> a(n) , b(n); input(a); input(b);

    priority_queue <ll> tmp;

    for (int i = 0 ; i < n ; i++) {
        tmp.push(pow(abs(a[i] - b[i]) , 2));
    }

    ll k = x + y;

    while (tmp.top() > 0 && k > 0) {
        ll cur = sqrt(tmp.top());

        tmp.pop();

        tmp.push(pow((cur - 1) , 2));
        k--;
    }

    ll rem = 0;
    while (k--) {
        rem ^= 1;
    }

    while (!tmp.empty()) {
        rem += tmp.top();
        tmp.pop();
    }


    cout << rem << '\n';
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
