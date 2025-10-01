#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;
const int N = 1e5 + 5;

void solve() {
    ll n , m , l , r , q; cin >> n >> m;

    vector <pair<ll , ll>> arr;
    for (int i =0 ; i < n ; i++) {
        cin >> l >> r;
        arr.push_back({l , r});
    }
    sort(all(arr));


    vector <pair<ll , ll>> island;
    ll s = arr[0].first , e = arr[0].second;

    for (int i = 1 ; i < n ; i++) {
        if (arr[i].first > e) {
            island.push_back({s , e});
            s = arr[i].first , e = arr[i].second;
        }
        else {
            e = max(e , arr[i].second);
        }
    }
    island.push_back({s , e});

    //for (auto [a , b] : island) cout << a << " " << b << endl;

    cin >> q;
    while (q--) {
        cin >> l >> r;
        if (l > r) swap(l , r);

        auto it = upper_bound(all(island) , make_pair(l, r));
        //cout << "pair : " << it -> first << "  " << it -> second << '\n';

        if (it - island.begin() != 0) {
            auto a = upper_bound(all(island) , make_pair(l, r)) - island.begin();
            a--;

            //cout << "pair : " << island[a].first << "  " << island[a].second << '\n';

            if ((l >= island[a].first) && (r <= island[a].second)){
                cout << "YES" << '\n'; continue;
            }
            cout << "NO" << '\n'; continue;
        }


        if (it != island.end() && (l >= it -> first ) && (r <= it -> second)){
            cout << "YES" << '\n'; continue;
        }
        cout << "NO" << '\n';
    }
}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
