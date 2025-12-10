// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;


void solve() {
    int x1 , y1 , x2 , y2 , n , a , b , r; cin >> x1 >> y1 >> x2 >> y2;

    if (x1 > x2) swap(x1 , x2);
    if (y1 > y2) swap(y1 , y2);


    set <pair <int , int>> arr;

    for (int i = x1 ; i <= x2 ; i++) {
        arr.insert({i , y1});
        arr.insert({i , y2});
    }

    for (int i = y1 ; i <= y2 ; i++) {
        arr.insert({x1 , i});
        arr.insert({x2 , i});
    }

    map <pair<int , int> , int> mp;



    cin >> n;
    for (int i = 0 ; i < n ; i++) {
        cin >> a >> b >> r;


        for (auto [L , M] : arr) {
            if (sqrt(pow(a - L , 2)  +  pow(b - M , 2)) <= r) {
                mp[{L , M}] = 1;
            }
        }
    }



    cout << arr.size() - mp.size() << '\n';
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
