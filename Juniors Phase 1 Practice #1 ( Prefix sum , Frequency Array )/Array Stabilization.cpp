#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin() , x.end()
#define input(vec) for(auto& i : vec) cin >> i
#define ABoZeiD ios::sync_with_stdio(0) ,cin.tie(0) ,cout.tie(0)

using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    int n; cin >> n ;
    vector <int> arr(n); input(arr);
    sort (all(arr));
    
    cout << min((arr[n-1] - arr[1]) , (arr[n-2] - arr[0])) ;

}

int main() {
    ABoZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
