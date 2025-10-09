/// No problem, let's try again :)
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;
const ll N = 1e10 + 5;


void solve() {
    int n, x; cin >> n;
    string s;
    map <string , ll> mp;

    for (int i =0 ; i < n ; i++) {
        cin >> x;

        double cur = 1000;

        for (int j = 0 ; j < x ; j++) {
            cin >> s;

            if (j == 0) {
                mp[s]+= cur;
                continue;
            }

            mp[s] += (ll)round(cur * (90.0/100));

            cur = round(cur * (90.0/100));
        }

    }

    vector <pair <string , int>> tmp;

    for (auto [a , b] : mp) {
        tmp.push_back({a , b});
    }

     sort(all(tmp) , [](pair<string , int> p1, pair<string, int> p2) {
            if (p2.second == p1.second) {
                return p2.first >= p1.first;
            }

            return p1.second >= p2.second;
    });

    cout << tmp[0].first << '\n';

    for (auto [a , b] : tmp) {
        cout << a << " " << b << '\n';
    }



}


int main() {
    ABo_ZeiD;


    //freopen("popcorn.in" , "r", stdin);

    int t = 1;

    //cin >> t;
    while (t--)
        solve();

    return 0;
}
