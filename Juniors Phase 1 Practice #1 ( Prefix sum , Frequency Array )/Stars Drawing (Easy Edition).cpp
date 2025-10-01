#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin() , x.end()
#define input(vec) for(auto& i : vec) cin >> i
#define ABo_ZeiD ios::sync_with_stdio(0) ,cin.tie(0) ,cout.tie(0)

using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    int n , m; cin >> n >> m;
    vector <vector <char>> arr(1005 , vector <char>(1005));

    for (int i = 1 ; i <= n ; i++) {
        for (int j = 1 ; j <= m ; j++) {
             cin >> arr[i][j];
        }
    }
    vector <vector <int>> frq(1005 , vector <int>(1005 , 0));
    vector <int> r(100005) , c(100005) , len(100005);
    int cur = 0;

    for (int i = 1 ; i <= n ; i++) {
        for (int j = 1 ; j <= m ; j++) {
             if (arr[i][j] == '*' && arr[i][j+1] == '*' && arr[i][j-1] == '*' && arr[i+1][j] == '*'&& arr[i-1][j] == '*') {
                int t = 1; r[cur] = i ; c[cur] = j;

                while (arr[i][j+t] == '*' && arr[i][j-t] == '*' && arr[i+t][j] == '*'&& arr[i-t][j] == '*') {
                    len[cur]++;
                    frq[i][j]++; frq[i][j+t]++;
                    frq[i][j-t]++;frq[i+t][j]++;
                    frq[i-t][j]++;
                    t++;
                }
                cur++;
             }
        }
    }


    //i'm cooked XDDD
    for (int i =1 ; i <= n ; i++) {
        for (int j =1 ; j <= m ; j++) {
            if (arr[i][j] == '*' && frq[i][j] == 0) {
                cout << -1; return;
            }
        }
    }

    if (cur == 0) {
        cout << 0 ; return;
    }

    cout << cur << endl;

    for (int i =0 ; i < cur ; i++) {
        cout << r[i] << " " << c[i] << " " << len[i] << endl;
    }


}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
