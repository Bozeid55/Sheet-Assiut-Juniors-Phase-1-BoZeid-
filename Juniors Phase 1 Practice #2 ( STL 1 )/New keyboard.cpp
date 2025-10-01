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
    string s;

    while (getline(cin, s)) {
        deque <char> b , f;
        char cur = '[' , tmp = '*';

        int cnt = 0;
        for (int i =0 ; i < s.length() ; i++) {
            //cout << "cnt : " << cnt << endl;
            if (cur == '[' && (s[i] == ']' || s[i] == '[')) cnt = 0;
            //if (cur == '[' && s[i] == ']') cnt = 0;
            auto it = f.begin() + cnt;

            if (s[i] == '[') {
                tmp = 'l'; continue;
            }
            else if (s[i] == ']') {
                tmp = 'r'; continue;
            }

            else {
                if (tmp == 'l') {
                    f.insert(it , s[i]); cnt++;
                }
                else b.push_back(s[i]);
            }

        }

        for (auto i : f) {
            cout << i;
        }

        for (auto i : b) {
            cout << i;
        }
        cout << endl;
    }



/*
    Name[My_]_Is_[Moh_[emd
    emdMoh_My_Name_Is_
*/

}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
