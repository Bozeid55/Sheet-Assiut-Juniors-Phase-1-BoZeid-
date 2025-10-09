#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin() , x.end()
#define input(vec) for(auto& i : vec) cin >> i
#define ABo_ZeiD ios::sync_with_stdio(0) ,cin.tie(0) ,cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    ll n , k; cin >> n >> k;
    vector <int> arr(n); input(arr);

    ll l = 0 , r = 0 , sum = 0 , mx = 0;

    while (r < n) {
        sum += arr[r];

        while (sum > k) {
            sum -= arr[l]; l++;
        }
        mx = max(mx , r - l + 1);
        r++;
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
