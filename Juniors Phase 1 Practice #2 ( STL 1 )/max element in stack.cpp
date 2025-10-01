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
    int n , t; cin >> n;
    stack <ll> st , mx;

    ll x;
    while (n--) {
        cin >> t;
        if (t == 1) {
            cin >> x; st.push(x);

            if (mx.empty() || x >= mx.top()) mx.push(x);

            cout << mx.top() << '\n';
        }

        else {
            if (!st.empty()) {
                ll cur = st.top();
                st.pop();
                
                if (!mx.empty() && mx.top() == cur) mx.pop();
            }
            if (!mx.empty()) cout << mx.top() << '\n';
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
