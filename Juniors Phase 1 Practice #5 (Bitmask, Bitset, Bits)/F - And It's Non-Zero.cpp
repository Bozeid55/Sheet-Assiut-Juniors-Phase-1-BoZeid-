// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

const ll N = 2 * 1e5 + 5;

vector <vector <ll>> nums(18 + 1 , vector <ll>(N));

bool knowBit (int n , int i) {
    return (1 & (n >> i));
}

void pre () {
    for (int i = 1 ; i <= N ; i++) {
        for (int j = 1 ; j <= 18 ; j++) {
            if (knowBit(i , j - 1)) {
               nums[j][i]++; 
            }
        }
    }
    
    for (int i = 1 ; i <= N ; i++) {
        for (int j = 1 ; j <= 18 ; j++) {
            nums[j][i] += nums[j][i-1];
        }
    } 
}




void solve() {
    int l , r; cin >> l >> r;
    
    ll mx = LLONG_MIN , d = r - l + 1;
    for (int i = 1 ; i <= 18 ; i++)  {
        mx = max(mx , (nums[i][r] - nums[i][l-1]));
    }
    
    cout << d - mx << endl;
}

int main() {
    ABo_ZeiD;
    pre();

    //freopen("smallest.in" , "r", stdin);

    int t = 1;

    cin >> t;
    while (t--)
        solve();


    return 0;
}
