#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    int n , x , q; cin >> n;
    deque <int> arr; set <int> st;

    for (int i = 0 ; i < n ; i++) {
        cin >> x; arr.push_back(x);
    }

    cin >> q; char c;
    while (q--) {
        cin >> c;

        if (c == 'L') {
            if (arr.size() > 0) {
                st.insert(arr.front());
                arr.pop_front();
            }
        }

        else if (c =='R') {
            if (arr.size() > 0) {
                st.insert(arr.back());
                arr.pop_back();
            }
        }

        else {
            if (st.size() > 0) {
                auto it = prev(st.end());
                
                cout << *it << '\n';
                st.erase(it);
            }
            else {
                cout << -1 << '\n';
            }
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
