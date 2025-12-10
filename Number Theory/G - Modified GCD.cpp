// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

vector <ll> divisors (ll n) {
    vector <ll> ret;

    for(ll i = 1 ; i*i <= n ; i++) {
        if(n % i == 0) {
            ret.push_back(i);

            if (i*i != n) {
                ret.push_back(n/i);
            }
        }
    }

    return ret;
}


void solve() {
    ll a , b , n , l , r; cin >> a >> b >> n;

    if (a > b) swap(a , b);

    vector <ll> nums = divisors(__gcd(a , b)); sort(all(nums));


    while (n--) {
        cin >> l >> r;

        ll x = 0 , y = nums.size() - 1 , mid , ans = -1;

        while (x <= y) {
            mid = x + (y - x) / 2;

            if (nums[mid] <= r) {
                ans = nums[mid];
                x = mid + 1;
            }
            else {
                y = mid - 1;
            }
        }



        cout << ((ans > r || ans < l || ans == -1) ? -1 : ans) << '\n';
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
