#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin() , x.end()
#define input(vec) for(auto& i : vec) cin >> i
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    int n ,m , k; cin >> n >> m >> k;
    vector <int> arr(m+1);
    input(arr);


    // last (m+1)
    bitset<32> a(arr[m]);
    int ans = 0;

    // i < m --> cur = m -1
    for (int i =0 ; i < m ; i++) {
        bitset<32> b(arr[i]);
        int cnt = 0;
        for (int mask = 0 ; mask < 32 ; mask++) {
            if (a[mask] != b[mask]) {
                cnt++;
            }
        }
        if (cnt <= k) ans++;
    }

    cout << ans << endl;
}


int main() {
    ios::sync_with_stdio(0) ,cin.tie(0) ,cout.tie(0);
    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
