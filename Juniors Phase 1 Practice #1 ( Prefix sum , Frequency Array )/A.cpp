#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin() , x.end()
#define input(vec) for(auto& i : vec) cin >> i
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    int n , k; cin >> n>> k;
    string s; cin >> s;

    for (int i = 'a' ; i <= 'z' ; i++) {
        if (k == 0)  break;

        for (int j =0 ; j < s.length() ; j++) {
            if (s[j] == (char)i) {
                k--; s[j] = ' ';
            }
            if (k == 0) break;
        }
    }


    for (int i =0 ; i < s.length() ; i++) {
        if (s[i] != ' ') cout << s[i];
    }

}

int main() {
    ios::sync_with_stdio(0) ,cin.tie(0) ,cout.tie(0);

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
