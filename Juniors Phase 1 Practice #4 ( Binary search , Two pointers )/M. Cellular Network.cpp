/// No problem, let's try again :)
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

const ll N = 1e18 + 2;

int n , m;

bool can (ll mid , vector <ll> a , vector <ll> b) {
    vector <ll> vis(n + 1);

    //cout << mid << '\n';

    for (auto i : b) {
        ll pos = i + mid , neg = i - mid;

        ll l = 0 , r = n - 1 , md , ans1 = -1 , ans2 = n;

        while (l <= r) {
            md = l + (r - l) / 2;

            if (a[md] <= pos) {
                ans1 = md;
                l = md + 1;
            }
            else {
                r = md - 1;
            }
        }


        l = 0 , r = n - 1 , md;

        while (l <= r) {
            md = l + (r - l) / 2;

            if (a[md] >= neg) {
                ans2 = md;
                r = md - 1;
            }
            else {
                l = md + 1;
            }
        }

        //cout << ans1 << " " << ans2 << '\n';


        vis[ans2]++ , vis[min(ans1 + 1 , (ll)n)]--;
    }
    /*
    for (auto i : vis) {
        cout << i << " ";
    }
    cout << '\n';
    cout << '\n';
    cout << '\n';

    */

    for (int i = 1 ; i < n ; i++) {
        vis[i] += vis[i - 1];
    }


    for (int i = 0 ; i < n ; i++) {
        if (vis[i] == 0) {
            return false;
        }
    }

    return true;
}


void solve() {
    cin >> n >> m;
    vector <ll> a(n) , b(m); input(a); input(b);

    ll l = 0 , r = N , mid , ans = LLONG_MAX;

    while (l <= r) {
        mid = l + (r - l) / 2;

        if (can(mid , a , b)) {
            ans = min(ans , mid);
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
