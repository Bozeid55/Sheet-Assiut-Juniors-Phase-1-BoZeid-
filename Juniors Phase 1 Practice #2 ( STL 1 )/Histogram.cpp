#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;
/*
 {idx , height}

mismatch (can't extends more -> [height < current])
-maximize answer
-pop  
-find first match [index]

push on stack (for any way match or not (we handel this case {mismatch step})) 

*/

void solve() {
    int n; cin >> n;
    vector <ll> arr(n); input(arr);

    stack <pair <ll , ll>> st;
    ll mx = LLONG_MIN , w;

    for (int i = 0 ; i < n ; i++) {
        w = i;

        while (!st.empty() && arr[i] < st.top().second) {
            mx = max(mx , (st.top().second * (i - st.top().first)));
            w = st.top().first;

            st.pop();
        }

        st.push({w , arr[i]});
    }


    while (!st.empty()) {
        mx = max(mx , (st.top().second * (n - st.top().first)));
        st.pop();
    }

    
    cout << mx << '\n';
}

int main() {
    ABo_ZeiD;

    int t; cin >> t;
    while (t--)
        solve();

    return 0;
}
