#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool knowBit(ll n , int i) {
    return (n>>i)&1;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n , l , r , x; cin >> n >> l >> r >> x;
    vector <int> arr(n);
    for (int i =0 ; i < n ; i++) cin >> arr[i];
    int ans = 0;

    for (int mask =0 ; mask < (1<<n) ; mask++) {
        int cnt =0 , mx = INT_MIN , mn = INT_MAX , p = 0;

        for (int i =0 ; i < n ; i++) {
            if (knowBit(mask , i) == 1) {
                cnt += arr[i];
                mx = max(mx ,arr[i]); mn = min(mn , arr[i]); p++;
            }
        }

        if (p >= 2 && cnt >= l && cnt <= r && abs(mn - mx) >= x) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
