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

string a , b;

bool can (int mid , int n , vector <int> arr) {
    string tmp = a , s = "";

    for (int i = 0 ; i < mid ; i++) {
        tmp[arr[i] - 1] = '+';
    }

    for (auto i : tmp) {
        if (i != '+') s += i;
    }


    int cur = 0;
    for (int i = 0 ; i < s.length() ; i++) {
        if (s[i] == b[cur]) cur++;
    }

    //cout << cur << '\n';

    return (cur >= b.length());
}



void solve() {
    cin >> a >> b;
    int n = a.length();

    vector <int> arr(n); input(arr);

    int l = 0 , r = n , mid , ans = 0;

    while (l <= r) {
        mid = l + (r - l) / 2;

        if (can(mid , n , arr)) {
            ans = max(ans , mid);
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
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
