// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

bool knowBit (int n , int i) {
    return (1 & (n >> i));
}

void solve() {
    int n; cin >> n;
    vector <vector <int>> arr(n , vector <int>(n));

    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            cin >> arr[i][j];
        }
    }

    int sz = -1; vector <int> ans;

    for (int i = 0 ; i < (1 << n) ; i++) {
        int cur = 0; vector <int> tmp;

        for (int j = 0 ; j < n ; j++) {
            if (knowBit(i , j)) {
                cur++; tmp.push_back(j);
            }
        }


        bool flag = true;
        for (int j = 0 ; j < cur  ; j++) {
            for (int k = 0 ; k < cur ; k++) {
                if (arr[tmp[j]][tmp[k]] == 0) {
                    flag = false; break;
                }
            }

            if (flag == false) break;
        }

        if (flag) {
            if (cur > sz) {
                sz = cur; ans = tmp;
            }
        }
    }


    cout << sz << '\n';

    for (auto i : ans) {
        cout << i + 1 << " ";
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
