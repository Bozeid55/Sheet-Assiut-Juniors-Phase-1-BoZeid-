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
    int n , h , q , l , r; cin >> n >> h; q = n;
    vector <ll> arr(n + 2 , 0);
    
    while (q--) {
        cin >> l >> r;
        arr[l]++; arr[r+1]--;
    }

    for (int i = 1 ; i <= n ; i++) arr[i] += arr[i-1];

    for (int i = 1; i <= n ; i++) {
         arr[i] = n - arr[i];
    }
    
    for (int i = 1 ; i <= n ; i++) arr[i] += arr[i-1];


    ll mn = OO;
    for (int i = h; i <= n; i++) {
        ll tmp = arr[i] - arr[i-h];
        mn = min(mn , tmp);
    }

    cout << mn << '\n';
}

int main() {
    ABo_ZeiD;

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}

    
