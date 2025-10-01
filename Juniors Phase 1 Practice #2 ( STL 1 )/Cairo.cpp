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
    vector <int> arr(n); input(arr);

    int cur = 1; stack <int> st;
    for (int i = 0 ; i < n ; i++) {
        if (arr[i] != cur) {
            st.push(arr[i]);
            continue;
        }

        /*
        else if (!st.empty() && st.top() == cur){
            cur++; st.pop();
            continue;
        }
        */

        cur++;
        while (!st.empty() && st.top() == cur) {
            st.pop(); cur++;
        }
    }


    cout << (st.empty() ? "YES" : "NO") << '\n';
}

int main() {
    ABo_ZeiD;

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}
