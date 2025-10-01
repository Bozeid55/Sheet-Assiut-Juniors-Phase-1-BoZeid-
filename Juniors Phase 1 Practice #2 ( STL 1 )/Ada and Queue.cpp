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
    int n , x; cin >> n;
    deque <int> q;

    string s;
    while (n--) {
        cin >> s;

        if (s == "toFront" || s == "push_back") {
            cin >> x;

            if (s == "toFront") q.push_front(x);
            else q.push_back(x);
        }
        else {
           if (s == "front") {
                if (q.empty()) {
                    cout << "No job for Ada?" << endl; continue;
                }
                else {
                    cout << q.front() << endl;
                    q.pop_front();
                    continue;
                }
           }
           else if (s == "back") {
                if (q.empty()) {
                    cout << "No job for Ada?" << endl; continue;
                }
                else {
                    cout << q.back() << endl;
                    q.pop_back();
                    continue;
                }
           }
           else {
                reverse(all(q));
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
