// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;


void solve() {
    ll x , y;

    while (cin >> x >> y) {
        ll lst = 0;

        set <ll> st; st.insert(0); map <ll , ll> mp;
        mp[0]++;

        while (true) {
            lst = (lst + x) % y;
            if (mp[lst] == 1) break;

            st.insert(lst); mp[lst]++;
        }


        string a = to_string(x) , b = to_string(y) , s = (st.size() == y ? "Good Choice" : "Bad Choice");

        //int cnta = 0 , cntb = 0;
        for (int i = 0 ; i < 10 - a.length() ; i++){
             cout << ' '; //cnta++;
        }
        cout << x;

        for (int i = 0 ; i < 10 - b.length() ; i++){
             cout << ' '; //cntb++;
        }

        cout << y << "    " <<  s << '\n';
        cout << '\n';
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
