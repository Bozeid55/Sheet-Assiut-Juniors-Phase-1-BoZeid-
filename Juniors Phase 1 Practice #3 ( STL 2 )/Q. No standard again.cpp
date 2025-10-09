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


void crdcomp (vector <ll> &x , map <ll , ll>&mp) {
    set <ll> st(all(x));

    int idx = 1;
    for (auto i : st) {
        mp[i] = idx;
        idx++;
    }
}

ll ans (ll i, ll j , ll k , ll l , vector<vector<ll>> & arr) {
    return arr[k][l] - arr[k][j-1] - arr[i-1][l] + arr[i-1][j-1];
}


void solve() {
    int n , q; cin >> n >> q;
    vector <ll> x(n) , y(n) , num(n) , allX , allY;
    map <ll , ll> X , Y;

    for (int i = 0 ; i < n ; i++) {
        cin >> x[i] >> y[i] >> num[i];

        allX.push_back(x[i]);
        allY.push_back(y[i]);
    }


    vector <ll> a1(q) , a2(q) , b1(q) , b2(q);

    for (int i = 0 ; i < q ; i++) {
        cin >> a1[i] >> b1[i] >> a2[i] >> b2[i];
        allX.push_back(a1[i]); allY.push_back(b1[i]);
        allX.push_back(a2[i]); allY.push_back(b2[i]);
    }


    crdcomp(allX , X);
    crdcomp(allY , Y);

    /*----------------------*/
    for (auto &i : x) {
        i = X[i];
    }
    for (auto &i : y) {
        i = Y[i];
    }
    /*----------------------*/
    for (auto &i : a1) {
        i = X[i];
    }
    for (auto &i : b1) {
        i = Y[i];
    }

    for (auto &i : a2) {
        i = X[i];
    }
    for (auto &i : b2) {
        i = Y[i];
    }
    /*----------------------*/
    ll l = X.size() , r = Y.size();

    vector <vector <ll>> arr(l + 3 , vector <ll>(r + 3));

    for (int i = 0 ; i < n ; i++) {
        arr[x[i]][y[i]] = num[i];
    }

    //prx sum 2d
    for (int i = 1; i <= l ; i++)
      for (int j = 1; j <= r ; j++)
        arr[i][j] += arr[i][j-1];


    for (int j = 1; j <= r ; j++)
      for (int i = 1; i <= l ; i++)
          arr[i][j] += arr[i-1][j];

    /*----------------------*/

     for (int i = 0 ; i < q ; i++) {
        cout << ans(a1[i] , b1[i] , a2[i] , b2[i] , arr) << '\n';
     }


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
