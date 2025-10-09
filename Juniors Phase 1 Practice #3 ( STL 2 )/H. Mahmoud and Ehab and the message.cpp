/// No problem, let's try again :)
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;
const ll N = 1e6 + 5;

void solve() {
    ll n , k , m , x , tt , num; cin >> n >> k >> m;
    vector <string> arr(n); input(arr);


    map <string , ll> mp;
    for (int i = 0 ; i < n; i++) {
        cin >> x;
        mp[arr[i]] = x;
    }


    while (k--) {
        cin >> tt;

        ll mn = LLONG_MAX;

        vector <string> tmp;
        for (int i = 0 ; i < tt ;i++) {
            cin >> num;
            tmp.push_back(arr[num-1]);

            mn = min(mn , mp[arr[num-1]]);
        }

        for (auto i : tmp) {
            mp[i] = mn;
        }

    }

    ll cnt = 0;

    string ss;
    for (int i = 0 ; i < m ; i++) {
        cin >> ss;

        cnt += mp[ss];
    }


    cout << cnt << '\n';
}


int main() {
    ABo_ZeiD;

    //freopen("popcorn.in" , "r", stdin);

    int t = 1;

    //cin >> t;
    while (t--)
        solve();

    return 0;
}
