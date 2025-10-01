#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin() , x.end()
#define input(vec) for(auto& i : vec) cin >> i
#define ABoZeiD ios::sync_with_stdio(0) ,cin.tie(0) ,cout.tie(0)

using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    int n , q; cin >> n >> q;
    vector <int> arr(n); input(arr);

    set <int> st; map <int , int> mp;

    for (int i = n - 1; i >= 0; i--) {
        st.insert(arr[i]); mp[i] = st.size();
    }

    while (q--) {
        int x; cin >> x;
        cout << mp[x-1] << endl;
    }


}

int main() {
    ABoZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
