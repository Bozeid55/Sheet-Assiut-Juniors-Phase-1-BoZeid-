#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;
/*
    sub (1 , A) 0 --> i
    sub (2 , B) i+1 --> j
    sub (3 , C) j+1 --> n
*/
void solve() {
    string s; cin >> s;
    int n = s.length(); s = '*' + s;

    int a[5005] = {0} , b[5005] = {0};

    for (int i = 1 ; i <= n ; i++) {
        a[i] += (s[i] == 'a') , a[i] += a[i-1];
        b[i] += (s[i] == 'b') , b[i] += b[i-1];
    }

    int mn = INT_MAX , A , B , C , sum;

    for (int i =0 ; i <= n ; i++) {
        for (int j = i ; j <= n ; j++) {
            A = b[i]; B = a[j] - a[i]; C = b[n] - b[j];
            sum = A + B + C;

            mn = min(mn , sum);
        }
    }

    cout << n - mn << endl;
}


int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
