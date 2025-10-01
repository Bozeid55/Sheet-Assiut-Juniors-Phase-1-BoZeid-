#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    int n , q; cin >> n >> q;
    deque <ll> dq; vector <pair <ll , ll>> arr; vector <ll> B;

    ll x , mx = LLONG_MIN , a , b;
    for (int i = 0 ; i < n ; i++) {
        cin >> x; dq.push_back(x);
        
        mx = max(mx , x);
    }

    while (dq.front() != mx) {
        a = dq[0] , b = dq[1];
        dq.pop_front(); dq.pop_front();

        arr.push_back({a , b});

        if (a > b) {
            dq.push_front(a); dq.push_back(b);
        }
        else {
            dq.push_front(b); dq.push_back(a);
        }
    }

    for (int i = 1 ; i < n; i++) {
        B.push_back(dq[i]);
    }

    ll aS = arr.size() , bS = B.size();

    while (q--) {
        cin >> x;

        if (x <= aS) {
            cout << arr[x-1].first << " " << arr[x-1].second << '\n';
        }
        else {
            x -= aS;

            cout << mx << " " << B[(x-1) % (bS)] << '\n';
        }
    }
}

int main() {
    ABo_ZeiD;
    
    //int t; cin >> t;
    //while (t--)
        solve();
    
    return 0;
}
