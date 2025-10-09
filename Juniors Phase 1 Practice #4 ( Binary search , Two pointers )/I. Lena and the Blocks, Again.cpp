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
    int n; cin >> n;
    vector <ll> arr(n); map <ll , vector<int>> mp;

    ll mn = OO , mx = LLONG_MIN;


    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i]; mn = min(mn, arr[i]); mx = max(mx , arr[i]);
    }

    for (int i = 0 ; i < n ; i++) {
        if (arr[i] == mn) {
            mp[mn].push_back(i); continue;
        }
        if (arr[i] == mx) {
            mp[mx].push_back(i); continue;
        }
    }

    sort(all(mp[mn]));
    sort(all(mp[mx]));

    ll mnDis = OO;

    int i = 0 , j = 0;

    while (i < mp[mn].size() && j < mp[mx].size()) {
        mnDis = min(mnDis, abs(mp[mn][i] - mp[mx][j]) + 0ll);

        if (mp[mn][i] <= mp[mx][j]) i++;
        else j++;
    }


    cout << mnDis << endl;
}


int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
