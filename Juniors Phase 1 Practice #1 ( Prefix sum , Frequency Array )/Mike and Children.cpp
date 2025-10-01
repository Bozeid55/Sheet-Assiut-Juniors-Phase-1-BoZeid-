#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    int n; cin >> n;
    vector <int> arr(n); input(arr); sort(all(arr));

    map <int , int> mp;

    for (int i =0 ; i < n ; i++) {
        for (int j = i + 1 ; j < n ; j++) {
            mp[arr[i] + arr[j]]++;
        }
    }
    int mx = 0;
    for (auto [a , b] : mp) {
        mx = max (mx , b);
    }

    cout << mx << endl;
}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
