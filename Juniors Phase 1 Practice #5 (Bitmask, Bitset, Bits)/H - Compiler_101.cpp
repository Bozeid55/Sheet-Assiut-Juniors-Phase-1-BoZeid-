// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

bool knowBit (ll n , int i) {
    return (1& (n >> i));
}

void solve() {
    int n; cin >> n;
    vector <ll> arr(n) , prx(n);

    ll mx = 0;
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i]; mx |= arr[i];
    }

    prx = arr;
    for (int i = 1 ; i < n ; i++) {
        prx[i] |= prx[i - 1];
    }


    auto can = [&] (ll mid) -> bool {
        vector <ll> cur(31 , 0);

        ll x = 0 , y = mid - 1;
        for (int i = x ; i <= y ; i++) {
            for (int j = 0 ; j < 31 ; j++) {
                if (knowBit(arr[i] , j)) cur[j]++;
            }
        }

        while (y < n) {
            if (x == 0) {
                if (prx[y] == mx) return true;
                else x++ , y++;

                continue;
            }

            bitset <31> anss = 0;

            for (int i = 0 ; i < 31 ; i++) {
                if (knowBit(arr[x - 1] , i)) {
                    if (cur[i] > 0) cur[i]--;
                }

                if (knowBit(arr[y] , i)) cur[i]++;
            
                anss[i] = (cur[i] >= 1 ? 1 : 0);
            }

            if (anss == mx) return true;
            x++ , y++;
        }

        return false;
    };


    ll l = 1 , r = n , mid , ans = -1;
    while (l <= r) {
        mid = l + (r - l) / 2;

        if (can(mid)) {
            ans = mid;
            r = mid - 1;
        }

        else {
            l = mid + 1;
        }
    }


    cout << ans << '\n';
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
