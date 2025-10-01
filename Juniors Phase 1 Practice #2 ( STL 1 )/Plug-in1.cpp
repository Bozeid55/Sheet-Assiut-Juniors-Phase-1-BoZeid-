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
    string s; cin >> s;
    stack <char> st;

    for (int i = 0 ; i < s.length() ; i++) {
        if (!st.empty() && st.top() == s[i]) {
            st.pop(); continue;
        }
        st.push(s[i]);
    }

    string ans = "";
    while (!st.empty()) {
        ans += st.top(); st.pop();
    }

    reverse(all(ans));
    cout << ans;
}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
