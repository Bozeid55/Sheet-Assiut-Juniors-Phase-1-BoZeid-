#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin() , x.end()
#define input(vec) for(auto& i : vec) cin >> i
#define ABo_ZeiD ios::sync_with_stdio(0) ,cin.tie(0) ,cout.tie(0)

using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    ll n , sum = 0; cin >> n;
    vector <int> arr(n) ,ans;
    map <int , int> frq;
    for (int i =0 ; i < n ; i++) {
        cin >> arr[i]; sum += arr[i]; frq[arr[i]]++;
    }


    for (int i = 0 ; i < n ; i++) {
        sum -= arr[i]; frq[arr[i]]--;

        if (!(sum&1) && frq[sum/2] > 0 && sum /2 <= 1e6) {
            ans.push_back(i + 1);
        }

        sum += arr[i]; frq[arr[i]]++;
    }

    cout << ans.size() << endl;
    for (auto i : ans) {
        cout << i << " ";
    }

}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
