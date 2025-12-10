// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;


void solve() {
    int n , m , a , b; cin >> n >> m;

    map <int , set <int>> mp;

    while (m--) {
        cin >> a >> b;
        mp[a].insert(b); mp[b].insert(a);
    }

    bool flag = false;
    for (auto [x , y] : mp) {
        if (y.size() == 1) {
            flag = true; break;
        }
    }

    if (flag == false) {
        cout << 0 << '\n';
        return;
    }



    int ans = 0;
    while (true) {
        vector <int> st; ans++;

        map <int , set <int>> tmp = mp;
        for (auto [x , y] : tmp) {
            if (y.size() == 1) {
                st.push_back(x); mp.erase(x);
            }
        }


        for (auto &[x , y] : mp) {
            for (auto i : st) {
                if (y.count(i)) y.erase(i);
            }
        }


        bool con = false;
        for (auto [x , y] : mp) {
            if (y.size() == 1) {
                con = true; break;
            }
        }

        if (con == false) break;
    }



    cout << ans << '\n';

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
