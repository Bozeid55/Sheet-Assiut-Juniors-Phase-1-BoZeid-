// وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll N = 1e7;

vector <string> nums;

void pre () {
    ll mx = 0 , sum = 0;
    for (int i = 1 ; i <= N ; i++) {
        if (sum + i > N) {
            mx++ , sum += i;
            break;
        }
        if (sum + i <= N) {
            mx++ , sum += i;
        }
    }
    
    //nums.push_back("0/0");
    
    //cout << mx << '\n';
    
    for (int i = 1 ; i <= mx ; i++) {
        for (int a = 1 , b = i ; a <= i && b >= 1 ; a++ , b--) {
           string tmp;
           
           if (i & 1) tmp = to_string(b) + '/' + to_string(a);
           else tmp = to_string(a) + '/' + to_string(b);
           
           nums.push_back(tmp);
        }
    }
}


void solve() {
    int x;
    
    while (cin >> x) {
        cout << "TERM " << x << " IS " << nums[x-1] << '\n';
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
