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
    typedef tree<ll, null_type, less<ll>, rb_tree_tag , tree_order_statistics_node_update> ordered_set;
}
using namespace __gnu_pbds;


void solve() {
    int n , k; cin >> n >> k;
    string s; cin >> s;

    int a = 0 , b = 0;

    for (auto i : s) {
        if (i == 'a') a++;
        else b++;
    }


    int l = 0 , r = 0 , cura = 0 , curb = 0 , ans = INT_MIN;

    while (r < n && l < n) {
        //int cnt = 0;

        while (r < n && ((cura + (s[r] == 'a')) <= k || (curb + (s[r] == 'b')) <= k)) {
            s[r] == 'a' ? cura++ : curb++;
            r++; //cnt++;
        }

        //cout << cnt << " " << l << " " << r << '\n';

        ans = max(ans , r - l); //hmmmmmm


        s[l] == 'a' ? cura-- : curb--;
        l++;
    }


    cout << ans << '\n';
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
