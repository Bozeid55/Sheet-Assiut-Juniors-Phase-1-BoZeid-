// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll N = 1e18;

void solve() {
    int n; cin >> n;
    
    for (int i = 1 ; i <= n ; i++) {
        string s , numm = ""; cin >> s;

        ll cnt = 0;
        for (auto i : s) {
            if (i == '!') cnt++;
            else numm += i;
        }
        ll num = stoll(numm);
        
        
        map <ll , ll> mp;
        
        auto primFactor = [&] (ll n) -> void {
            for(ll j = 2 ; j*j <= n ; j++) {
                if (n % j == 0) {
                    while (n%j == 0) {
                        n /= j; mp[j]++;
                    }
                }
            }
    
            if (n > 1) mp[n]++;
        };
    
        for (ll i = num ; i > 0 ; i -= cnt) primFactor(i);
        

        ll ans = 1; bool flag = false;
    
        for (auto [a , b] : mp) {

            if (ans * (b + 1)   >   N) {
                cout <<  "Case " <<  i  <<  ": Infinity" << '\n';
                
                flag = true;   break;
            }
            
            ans *= b + 1;
        }
        
        if (flag) continue;
    
        cout << "Case " << i << ": " << ans << '\n';
    }
    
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
