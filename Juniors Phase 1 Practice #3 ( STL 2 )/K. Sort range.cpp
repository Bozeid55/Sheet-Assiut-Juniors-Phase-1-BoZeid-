/// No problem, let's try again :)
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve() {
    int n , m , k; cin >> n >> m >> k;
    vector <ll> arr(n) , ans; input(arr);
    multiset <ll> st;


    for (int i = 0 ; i + m <= n ; i++) {
        if (i == 0) {
            for (int j = 0 ; j < m ;j++) {
                st.insert(arr[j]);
            }
            ans.push_back(*st.begin());
            st.erase(st.begin());
            continue;
        }

        st.insert(arr[i + m - 1]);
        ans.push_back(*st.begin());
        st.erase(st.begin());
    }

    for (auto i : st){
        ans.push_back(i);
    }

    cout << ans[k - 1] << '\n';
}

int main() {
    ABo_ZeiD;


    //freopen("popcorn.in" , "r", stdin);

    int t = 1;

    cin >> t;
    while (t--)
        solve();

    return 0;
}
