#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin() , x.end()
using namespace std;
const ll OO = LLONG_MAX;


void solve() {
    int n; cin >> n;

    map <string , int> mp;

    while (n--) {
        string s; cin >> s;
        mp[s]++;
        if (mp[s] == 1) {
            cout << "OK" << endl;
        }
        else {
            cout << s << mp[s] - 1 << endl;
        }
    }

}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
