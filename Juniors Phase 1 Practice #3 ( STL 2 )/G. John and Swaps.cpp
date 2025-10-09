/// No problem, let's try again :)
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

    set <vector <int>> st;

    for (int i =0 ; i < n ; i++) {
       for (int j = 0 ; j < n ; j++) {
           if (i == j) continue;
            swap(arr[i] , arr[j]);

            st.insert(arr);

            swap(arr[i] , arr[j]);
       }
    }
    

    cout << st.size() << '\n';

}

int main() {
    ABo_ZeiD;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
