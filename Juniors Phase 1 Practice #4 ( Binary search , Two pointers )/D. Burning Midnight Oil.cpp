#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll OO = LLONG_MAX;

const int  dx[] = {1 , -1 , 0 , 0};
const int  dy[] = {0 , 0 , 1 , -1};

ll u (ll n , ll k , ll x) {
    ll cnt = x;
    for (ll i = 1 ; i < n ; i++ ) {
        ll tmp = x / pow(k , i);
        if (tmp > 0) cnt+= tmp;

        /*
            [u / k^i] == 0 falls asleep
            write not less than n   ==   (u >= n)
        */         
         if (cnt >= n || tmp <= 0) break;
    }

    return cnt;
}




void solve() {
    ll n , k; cin >> n >> k;

    ll l = 0 , r = n , ans = 0, mid;

    while (l <= r) {
        mid = l + (r - l)/2;

        if (u(n , k , mid) >= n) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << ans << endl;
}



int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    //int t; cin >> t;
    //while (t--) {
        solve();
    //}


    return 0;
}
