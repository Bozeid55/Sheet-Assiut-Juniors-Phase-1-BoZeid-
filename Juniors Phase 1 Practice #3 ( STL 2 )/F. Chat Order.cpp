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
    map <string , int> mp; stack <string> st;

    while (n--) {
        string s; cin >> s;
        st.push(s);
    }

    while (!st.empty()) {
        if (mp[st.top()] < 1) {
            cout << st.top() << endl;
            mp[st.top()]++;
            st.pop();

        }
        else st.pop();
    }

}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
