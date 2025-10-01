#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    ll n , k; cin >> n >> k;
    vector <ll> arr(n + 1); inputone(arr , n); sort(all(arr));

    if (k == 0) {
        cout << (arr[1] != 1 ? 1 : -1) << endl; return;
    }

    if (arr[k] != arr[k+1]) { // check next only "maybe" XDD
        cout << arr[k] << endl; return;
    }
    cout << -1 << endl;

}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
