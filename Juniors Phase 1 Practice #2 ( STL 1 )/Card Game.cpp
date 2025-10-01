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
    string a , b , c; cin >> a >> b >> c;
    stack <char> M , A , R;

    for (int i = a.length() - 1 ; i >= 0 ; i--) M.push(a[i]);

    for (int i = b.length() - 1 ; i >= 0 ; i--) A.push(b[i]);

    for (int i = c.length() - 1 ; i >= 0 ; i--) R.push(c[i]);



    char cur = 'm';
    while (true) {
        if (cur == 'm' && M.empty()) {
            cout << 'M' << endl; return;
        }

        if (cur == 'a' && A.empty()) {
            cout << 'A' << endl; return;
        }

        if (cur == 'r' && R.empty()) {
            cout << 'R' << endl; return;
        }


        if (cur == 'm') {
            cur = M.top(); M.pop(); continue;
        }

        else if (cur == 'r') {
            cur = R.top(); R.pop(); continue;
        }
        else {
            cur = A.top(); A.pop(); continue;
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
