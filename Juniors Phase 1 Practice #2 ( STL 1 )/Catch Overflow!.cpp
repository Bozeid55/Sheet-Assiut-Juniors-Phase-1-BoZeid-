#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;
const ll N = (1ll << 32) - 1;
void solve() {
    //cout << N ;

    int n , cur; cin >> n;

    ll x = 0;
    stack <string> st; stack <ll> num;

    string s , ans = "$";
    while (n--) {
        cin >> s;

        if (s == "add") {
            if (!st.empty() && st.top() == "for") {
                if (x + (num.top()) > N) {
                    ans = "OVERFLOW!!!";
                }
                else {
                    x += num.top();
                }
            }

            else {
                if (x + 1 > N) {
                    ans = "OVERFLOW!!!";
                }
                else {
                    x++;
                }
            }
        }

        else if (s == "end") {
            if (!st.empty()) {
                st.pop();
            }
            if (!num.empty()) {
                 num.pop();
            }
        }

        else {
            cin >> cur;

            if (num.empty() && st.empty()) {
                num.push(cur);
                st.push(s);
                continue;
            }

            st.push(s);
            if ((num.top()) > N / cur) {
                num.push(N + 1);
            }
            else {
                num.push(cur * num.top());
            }
        }
    }

    if (x > N || ans != "$") {
        cout << "OVERFLOW!!!" << endl;
        return;
    }
    cout << x << endl;

}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
