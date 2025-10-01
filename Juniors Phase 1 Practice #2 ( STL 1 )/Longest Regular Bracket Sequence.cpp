#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;
const ll mod = 1e9 + 7;

/*
[(}()[{(())}]
[(}()[{((())}]

[][][][]][][[][[()(()(())())
*/


void solve() {
    string s , tmp; cin >> s;
    tmp = s;

    stack <int> st;
    stack <char> ch;

    for (int i = 0 ; i < s.length() ; i++) {
        if (s[i] == '(' || s[i] == '<' || s[i] == '{' || s[i] == '[') {
            st.push(i); ch.push(s[i]);
        }

        else {
            if (!st.empty() && !ch.empty() && ((ch.top() == '(' && s[i] == ')') || (ch.top() == '[' && s[i] == ']') || (ch.top() == '{' && s[i] == '}') || (ch.top() == '<' && s[i] == '>'))) {
                tmp[i] = '1'; tmp[st.top()] = '1';

                st.pop(); ch.pop();
                
                //st.push(i); ch.push(s[i]);
            }
            else {
                tmp[i] = '0';
                while (!st.empty() && !ch.empty()) {
                    if (tmp[i] != '1') tmp[i] = '0';
                    st.pop();
                    ch.pop();
                
                }
            
            }
        }
    }

    for (int i = 0 ; i < tmp.length() ; i++) {
        if (tmp[i] != '1') {
            tmp[i] = '0';
        }
    }
    //cout << tmp << '\n';

    int cnt = 0 , mx = 0; map <int , int> mp;

    
    for (int i = 0 ; i < tmp.length() ; i++) {
        if (tmp[i] == '1') {
            cnt++;
        }
        else {
            mp[cnt]++;
            mx = max(mx , cnt);
            cnt = 0;
        }
    }
    mp[cnt]++;
    mx = max(mx , cnt);

    if (mx == 0) {
        cout << 0 << " " << 1;
        return;
    }


    cout << mx << " " << max(mp[mx] , 1);
}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
