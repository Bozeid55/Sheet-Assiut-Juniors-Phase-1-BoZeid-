#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    int n; cin >> n;
    vector <ll> arr(n); stack <ll> st;

    for (int i =0 ; i < n ; i++) {
        cin >> arr[i];

        if (st.empty()) {
            st.push(arr[i]); continue;
        }

        if ((arr[i] == st.top()) || ((arr[i]&1) && (st.top()&1)) || ((arr[i]%2 == 0) && (st.top() % 2 == 0)))  {
            st.pop();
        }
        else {
            st.push(arr[i]);
        }
    }

    cout << (st.empty() || st.size() == 1 ? "YES" : "NO");

}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
