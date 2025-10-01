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
    vector <string> arr(n); input(arr);

    stack <string> st; st.push(arr[0]);

    if ((arr[0] != "Header" && arr[n-1] != "EndHeader") || 
        (arr[0] == "Header" && arr[n-1] != "EndHeader") ||
        (arr[0] != "Header" && arr[n-1] == "EndHeader") ) {
        cout << "WA" << endl; return;
    }

    bool flag = true;
    for (int i = 1 ; i < n ; i++) {
        if (arr[i] == "Row" || arr[i] == "Cell" || arr[i] == "Table") {
            st.push(arr[i]); continue;
        }
        if (!st.empty() && ((st.top() == "Row" && arr[i] == "EndRow") ||
            (st.top() == "Cell" && arr[i] == "EndCell") ||
            (st.top() == "Table" && arr[i] == "EndTable") ||
            (st.top() == "Header" && arr[i] == "EndHeader"))) {
            st.pop(); continue;
        }
        flag = false; break;
    }

    cout << (flag ? "ACC" : "WA") << endl;
}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
