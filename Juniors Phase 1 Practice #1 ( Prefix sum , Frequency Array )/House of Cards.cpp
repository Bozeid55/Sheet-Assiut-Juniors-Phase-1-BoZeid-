#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;
const int N = 1e5 + 5;

void solve() {
    string s; int q , l = 0 , r = 0; cin >> s >> q;

    int n = s.length();

    int left[N] = {0} , right[N] = {0} , base[N] = {0};

    for (int i =0 ; i < n ; i++) {
        if (s[i] == '/') left[i]++;
        else if (s[i] == '\\') right[i]++;
        else base[i]++;
    }

    for (int i = 1 ; i < n ; i++) {
        left[i] += left[i-1];
        right[i] += right[i-1];
        base[i] += base[i-1];
    }


    vector <int> sides(n , 0) , b(n , 0);
    iota(all(sides) , 1); iota(all(b) , 0);


    for (int i = 1 ; i < n ; i++) {
        sides[i] += sides[i-1];
        b[i] += b[i-1];
    }

    //for (int i = 0 ; i < n ; i++) cout << sides[i] << " " << b[i] << endl;

    int B , L , R;
    while (q--) {
        cin >> l >> r; l--,r--;

        B = base[r] - base[l-1] , L = left[r] - left[l-1] , R = right[r] - right[l-1];

        int mn = min(L , R);

        auto f = (upper_bound(all(sides) , mn) - sides.begin()) - 1;
        auto s = (upper_bound(all(b) , B) - b.begin()) - 1;

        cout << min(f , s) + 1 << endl;
    }

}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
