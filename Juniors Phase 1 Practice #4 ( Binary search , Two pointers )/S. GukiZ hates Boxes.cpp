// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

const ll N = 1e18 + 5;
int n , m; vector <ll> arr;


bool can (ll mid) {
    vector <ll> tmp = arr;

    ll cnt = 0 , stud = 1;

    bool cur = true;
    for (int i = 0 ; i < n ; i++) {
        if (i + 1 >= mid) return false;

        while (true) {
            if (cur) {
                cnt = i + 1; cur = false;
            }
            else cnt++;

            if (cnt >= mid) {
                if (tmp[i]) {
                    cur = true; stud++;
                    continue;
                }

                break;
            }

            ll mn = min(tmp[i] , mid - cnt);
            tmp[i] -= mn; cnt += mn;

            if (tmp[i]) {
                cur = true; stud++;
            }


            if (!tmp[i]) break;
        }

    }

    for(int i = 0 ; i < n ; i++) {
        if (tmp[i] > 0) {
            return false;
        }
    }

    return (stud <= m);
}


void solve() {
    cin >> n >> m;
    arr.resize(n); input(arr);

    int tt = 0;
    for (int i = n - 1 ; i >= 0 ; i--) {
        if (arr[i] > 0) break;

        tt++;
    }
    n -= tt;


    ll l = 0 , r = N , mid , ans = LLONG_MAX;
    while (l <= r) {
        mid = l + (r - l) / 2;

        if (can(mid)) {
            ans = mid;

            r = mid - 1;
        }

        else l = mid + 1;
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
