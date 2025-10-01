#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin() , x.end()
#define input(vec) for(auto& i : vec) cin >> i
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    int n; cin >> n;
    vector <int> arr(n*2); input(arr);

    unordered_set<int> st;

    int cnt = 0 , tmp = 0;
    for (auto i : arr) {
        if (!st.count(i)) {
            st.insert(i); tmp++;
        }
        else {
            cnt = max(cnt, tmp);
            st.erase(i); tmp--;
        }
    }

    cout << cnt << endl;
}

int main() {
    ios::sync_with_stdio(0) ,cin.tie(0) ,cout.tie(0);

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
