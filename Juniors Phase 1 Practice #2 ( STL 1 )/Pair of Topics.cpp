#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;
const int N = 1e5 + 5;

/*
    ai + aj - bi - bj > bi + bj

    (ai - bi) + (aj - bj) > 0

    //(aj - bj) > -(ai - bi) + 1;

    (ai - bi) -> a
    (aj - bj) -> b

    -------------
   -  a + b > 0  -
    -------------

    4 8 2 6 2
    4 5 4 1 3

    -2 -1 0 3 5


    -2  --> 2   (3 5)
    -1  --> 2   (3 5)
     0  --> 2   (3 5)
     3  --> 1   (5)
     5  --> 0

     answer = 7
    ----------------

    (i < j)
*/


void solve() {
    int n; cin >> n;
    vector <ll> a(n) , b(n) , c(n);
    input(a); input(b);

    for (int i =0 ; i < n ; i++) {
        c[i] = a[i] - b[i];
    }

    sort(all(c));

    //for (auto i : c) cout << i << " ";



    ll ans = 0 , k = 1;
    for (int i = 0 ; i < n ; i++) {
        auto it = lower_bound(c.begin() + k , c.end() , (c[i] * -1ll) + 1ll) - c.begin();

        k++;
        ans += n - it ;
    }

    cout << ans << endl;


}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
