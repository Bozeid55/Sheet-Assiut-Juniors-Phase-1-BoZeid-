// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

const ll N = 1073741824;

ll divs (ll n) {
    ll cnt = 0;

    for(int i = 1 ; i*i <= n ; i++) {
        if(n % i == 0) {
            cnt++;

            if (i*i != n) {
                cnt++;
            }
        }
    }

    return cnt;
}

void solve() {
    ll a , b , c; cin >> a >> b >> c;
    
    vector <ll> arr(1000001 , 0);

    ll sum = 0;
    for (int i = 1 ; i <= a ; i++) {
        for (int j = 1 ; j <= b ; j++) {
            for (int k = 1 ; k <= c ; k++) {
                if (arr[i*j*k] == 0){
                    ll cur = divs(((i % N) * (j % N) * (k % N)) % N);
                    arr[i*k*j] = cur;
                    
                    sum += cur; sum %= N;
                    continue;
                }
               

                sum += arr[i*k*j]; sum %= N;
            }
        }
    }


    cout << sum << '\n';
}

int main() {
    ABo_ZeiD;

    //freopen("smallest.in" , "r", stdin);

    int t = 1;

    //cin >> t;
    while (t--)
        solve();


    return 0;
}
