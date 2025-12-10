// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

bool knowBit(int n , int i) {
    return (n >> i) & 1;
}

void solve() {
    int n; cin >> n;
    vector <int> arr(n); input(arr);


    for (int mask = 0 ; mask < (1 << n) ; mask++) {
        int sum = 0;

        for (int j = 0 ; j < n ; j++) {
            if (knowBit(mask , j)) {
                sum += arr[j];
            }
            else {
                sum -= arr[j];
            }
        }
        if (sum % 360 == 0) {
            cout << "YES"; return;
        }
    }

    cout << "NO";
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
