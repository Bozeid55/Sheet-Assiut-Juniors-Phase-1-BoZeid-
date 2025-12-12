// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll N = 1e18;

map <char , int> mp;
map <char , int> MP;

void pre () {
    char c = 'A';
    for (int i = 10 ; i <= 16 ; i++ , c++) {
        mp[c] = i; MP[i] = c;
    }
}

ll power(ll x, ll k) {
	ll ret = 1;
	while (k){
		if (k & 1) ret = (ret*x);
		k >>= 1; x = (x*x);
	}
	return ret;
}

void solve() {
    string s; ll a , b;
    
    while (cin >> s >> a >> b) {
        reverse(all(s));
        
        string fnl;
        if (b == 10) {
            ll ans = 0;
            for (int i = 0 ; i < s.length() ; i++) {
                if (s[i] >= 'A' && s[i] <= 'F') {
                    ans += power(a , i) * mp[s[i]];
                }
                else ans += power(a , i) * (s[i] - '0');
            }
            
            fnl = to_string(ans);
        }
        
        else {
            ll tmp = 0;
            
            for (int i = 0 ; i < s.length() ; i++) {
                if (s[i] >= 'A' && s[i] <= 'F') {
                    tmp += power(a , i) * mp[s[i]];
                }
                else tmp += power(a , i) * (s[i] - '0');
            }
            
            string cur = "";
            
            while (tmp > 0) {
                if ((tmp % b) > 9) {
                    cur += MP[tmp % b];
                }
                else {
                    cur += to_string(tmp % b);
                }
                
                tmp /= b;
            }
            reverse(all(cur));
            
            fnl = cur;
        }
        
        //cout << fnl << '\n; (0)
        if (fnl.empty()) {
            fnl = "0";
        }
        
        if (fnl.length() > 7) {
            cout << "  ERROR" << '\n';
            continue;
        }
        
        
        
        int spc = max(7 - (int)fnl.length() , 0); 
        while (spc--) cout << ' ';
        
        cout << fnl << '\n';
    }
    
}

int main() {
    ABo_ZeiD;
    
    pre();

    //freopen("smallest.in" , "r", stdin);

    int t = 1;

    //cin >> t;
    while (t--)
        solve();


    return 0;
}
