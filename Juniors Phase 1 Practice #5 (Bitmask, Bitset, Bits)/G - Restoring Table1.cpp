// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;


void solve() {
    int n; cin >> n;
    vector <vector <ll>> arr(n , vector <ll>(n));

    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0 ; i < n ; i++) {
        ll cur = 0;
        for (int j = 0 ; j < n ; j++) {
            if (arr[i][j] != -1) cur |= arr[i][j];
        }

        cout << cur << " ";
    }


}

int main() {
    ABo_ZeiD;


    //freopen("smallest.in" , "r", stdin);

    int t = 1;

    //cin >> t;
    while (t--)
        solve();


    return 0;
}
