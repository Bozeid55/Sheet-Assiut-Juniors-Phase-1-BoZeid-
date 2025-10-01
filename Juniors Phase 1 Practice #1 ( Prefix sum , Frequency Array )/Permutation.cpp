#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    ll n , q; cin >> n >> q ;

    vector <ll> arr(n) , frqP(n+2 , 0) , frqS(n+2 , 0) , prfx , sufx;

    frqP[0] = 10; frqS[0] = 10; // 10 or any number > 0

    for (int i =0 ; i < n ; i++) {
        cin >> arr[i]; frqP[arr[i]]++;

        auto it = find(all(frqP) , 0) - frqP.begin();
        //cout << it << endl;

        prfx.push_back(it);
    }

    //for (auto i : prfx) cout << i << " ";

    for (int i = n - 1 ; i >= 0 ; i--) {
        frqS[arr[i]]++;
        auto it = find(all(frqS) , 0) - frqS.begin();

        sufx.push_back(it);
    }

    reverse(all(sufx));
    //for (auto i : sufx) cout << i << " ";


    int l , r;

    while (q--){
        cin >> l >> r;
        l--; r--;

        cout << min(sufx[l] , prfx[r]) << endl;
    }
}

int main() {
    freopen("mex.in" , "r" , stdin);
    ABo_ZeiD;

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}
