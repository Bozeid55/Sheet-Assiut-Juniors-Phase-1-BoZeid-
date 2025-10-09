/// No problem, let's try again :)
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int n , k;
vector <ll> cnt; map <ll , ll> mp;

bool can (int mid , vector <ll> arr) {
    set <ll> st; vector <ll> tmp;

    for (int i = 0 ; i < n ; i++) {
        if (mp[arr[i]] < mid || st.count(arr[i])) continue;

        st.insert(arr[i]); ll cur = mp[arr[i]] / mid;

        while (cur-- && tmp.size() < k) tmp.push_back(arr[i]);
    }

    if (tmp.size() == k) {
        cnt = tmp; return true;
    }

    return false;
}



void solve() {
    cin >> n >> k;
    vector <ll> arr(n);

    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i]; mp[arr[i]]++;
    }

    sort(all(arr));


    ll l = 1 , r = n , mid , ans = 0;

    while (l <= r) {
        mid = l + (r - l) / 2;

        if (can (mid , arr)) {
            ans = mid;   l = mid + 1;
        }

        else {
            r = mid - 1;
        }
    }

    //cout << ans << "\n";

    for (auto i : cnt) {
        cout << i << " ";
    }

}

int main() {
    ABo_ZeiD;


    //freopen("smallest.in" , "r", stdin);

    int t = 1;

    //cin >> t;
    while (t--)
        solve();

    return 0;
}
