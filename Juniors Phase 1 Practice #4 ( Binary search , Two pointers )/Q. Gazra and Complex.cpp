/// No problem, let's try again :)
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

const ll N = 1e9 + 5;


vector <ll> nums;
void pre() {
    ll n = 1;
    
    while((n * (n + 1)) / 2 <= N){
        nums.push_back((n * (n + 1)) / 2);
        n++;
    }
}



void solve() {
   ll l , r; cin >> l >> r;
   
   ll x = 0;
   for (int i = 0 ; i < nums.size() ; i++) {
       auto a = (lower_bound(nums.begin() + i , nums.end() , l - nums[i]) - nums.begin());
       auto b = (upper_bound(nums.begin() + i , nums.end() , r - nums[i]) - nums.begin()) - 1;
       
       
       if (a > b) continue;
       
       x += (b - a) + 1;
   }
   
   cout << x << '\n';

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



    
