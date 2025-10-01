#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    int n; cin >> n;
    
    string s , type; stack <string> st;
    while (n--) {
        cin >> s;

        if (s == "pwd") {
            stack <string> ss = st; vector <string> tmp;

            if (ss.empty()) {
                cout << '/' << '\n';
                continue;
            }


            while (!ss.empty()) {
                tmp.push_back(ss.top());

                ss.pop();
            }

            reverse(all(tmp));

            for (auto it : tmp) {
                cout << '/' << it;
            }

            cout << '/' << '\n';
            continue;
        }

        else {
            cin >> type;

            if (type[0] == '/') {
                while (!st.empty()) {
                    st.pop();
                }


                vector <string> ans; string cur = "";

                for (int i = 0 ; i < type.length() ; i++) {
                    if (type[i] == '/'){
                        if (!cur.empty()){
                            ans.push_back(cur);
                            cur = "";
                        }
                    }
                    else {
                            cur += type[i];
                    }
                }

                if (!cur.empty()) ans.push_back(cur);


                for (auto it : ans) {
                    if (it == ".."){
                        if (!st.empty()) st.pop();
                    }
                    else {
                        st.push(it);
                    }
                }

            }

            else {
                vector <string> ans; string cur = "";

                for (int i = 0 ; i < type.length() ; i++) {
                    if (type[i] == '/'){
                        if (!cur.empty()){
                            ans.push_back(cur);
                            cur = "";
                        }
                    }
                    else {
                        cur += type[i];
                    }
                }

                if (!cur.empty()) ans.push_back(cur);


                for (auto it : ans) {
                    if (it == ".."){
                        if (!st.empty()) st.pop();
                    }
                    else {
                        st.push(it);
                    }
                }
            }
        }

    }

}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
