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
   ll n; cin >> n;
   string s; cin >> s; set <ll> st(all(s));


   ll sz = st.size();

   map <char , ll> mp;

   ll l = 0 , r = 0 , mn = n;

   while (r < n) {
        if (mp.size() < sz) {
            mp[s[r]]++;
            r++;
        }

        while (mp.size() == sz) {
            mn = min(mn , r - l);

            mp[s[l]]--;

            if (mp[s[l]] == 0) {
                mp.erase(mp.find(s[l]));
            }

            l++;
        }

         //cout << mp.size() << '\n';
   }


    cout << mn << '\n';

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
