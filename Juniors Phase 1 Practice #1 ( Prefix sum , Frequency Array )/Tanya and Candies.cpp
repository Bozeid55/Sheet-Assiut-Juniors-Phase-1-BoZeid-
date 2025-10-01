#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    int n; cin >> n;
    vector <int> arr(n);

    ll sume = 0 , sumo = 0;
    for (int i =0 ; i < n ; i++) {
        cin >> arr[i];
        if (i&1) sumo += arr[i]; else sume += arr[i];
    }

    ll cnt = 0 , lste = 0 , lsto = 0;
    for (int i =0 ; i < n ; i++) {
        if (i&1) sumo -= arr[i]; else sume -= arr[i];
        if (sume - lste == sumo - lsto) cnt++;
        if (i&1) lsto += arr[i]; else lste += arr[i];
    }

    cout << cnt << endl;
}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
