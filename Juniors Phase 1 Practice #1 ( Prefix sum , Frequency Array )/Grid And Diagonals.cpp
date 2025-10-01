#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

const ll OO = LLONG_MAX;

void solve() {
    int n , m , q;
    cin >> n >> m >> q;

    vector <vector <ll>> arr(n + 5 , vector <ll>(m + 5, 0)) , brr(n + 5 , vector <ll>(m + 5, 0));

    ll t , l , r , k , a;
    while (q--) {
        cin >> t >> l >> r >> k >> a;
        l--; r--; k--;

        if (t == 1) {
            arr[l][r] += a;

            if (l + k + 1 < n && r + k + 1 < m) arr[l + k + 1][r + k + 1] -= a;
        }
        else {
            brr[l][r] += a;
            if (r - k - 1 >= 0 && l + k + 1 < n && r - k - 1 < m) brr[l + k + 1][r - k - 1] -= a;
        }
    }

    //Prx diagonals (l --> r)
    for (int i = 0 ; i < m ; i++) {
        for (int l = 1 , r = i + 1 ; l < n && r < m ; l++ , r++) {
            arr[l][r] += arr[l - 1][r - 1];
        }
    }

    for (int i = 1 ; i < n ; i++) {
        for (int l = i + 1 , r = 1 ; l < n && r < m  ; l++ , r++) {
            arr[l][r] += arr[l - 1][r - 1];
        }
    }




    //Prx diagonals (r --> l)
    for (int i = 0 ; i < m ; i++) {
        for (int l = 1 , r = i - 1  ; l < n && r >= 0 ;  l++ , r--) {
            brr[l][r] += brr[l - 1][r + 1];
        }
    }


    for (int i = 1 ; i < n ; i++) {
        for (int l = i + 1 , r = m - 2  ; l < n && r >= 0 ;  l++ , r--) {
            brr[l][r] += brr[l - 1][r + 1];
        }
    }


    /*
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;


    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }


    */


    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            arr[i][j] += brr[i][j];
        }
    }



    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
