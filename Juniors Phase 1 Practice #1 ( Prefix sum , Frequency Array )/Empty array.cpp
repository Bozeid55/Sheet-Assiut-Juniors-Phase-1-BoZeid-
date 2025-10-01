#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin() , x.end()
#define input(vec) for(auto& i : vec) cin >> i
#define ABoZeiD ios::sync_with_stdio(0) ,cin.tie(0) ,cout.tie(0)

using namespace std;
const ll OO = LLONG_MAX;

void solve() {
    int n; cin >> n;
    vector <int> arr(n); map<int , int> mp;

    for (int i =0 ; i < n ; i++) {
        cin >> arr[i]; mp[arr[i]]++;
    }

    while (!(mp.empty())) {
        vector <int> tmp;
        for (auto &[a , b] : mp) {
            cout << a << " "; --b;
            if (b==0) tmp.push_back(a);
        }
        for (auto i : tmp) mp.erase(i);
        cout << endl;
    }

}

int main() {
    ABoZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
