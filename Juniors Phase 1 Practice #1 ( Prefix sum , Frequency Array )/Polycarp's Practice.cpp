#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin() , x.end()
#define input(vec) for(auto& i : vec) cin >> i
#define ABo_ZeiD ios::sync_with_stdio(0) ,cin.tie(0) ,cout.tie(0)

using namespace std;
const ll OO = LLONG_MAX;


void solve() {
    int n , k; cin >> n >> k;

    vector <int> arr(n) , tmp(n);

    for (int i =0 ; i < n ; i++) {
        cin >> arr[i];
        tmp[i] = arr[i];
    }

    sort(all(tmp) , greater <int>());

    int mx = 0;

    for (int i =0 ; i < k ; i++) {
        mx += tmp[i];
    }

    cout << mx << endl;

    vector <int> ans;
    int cnt = 0;

    for (int i =0 ; i < n ; i++) {
        for (int j = 0 ; j < k ; j++) {
            if (arr[i] == tmp[j]) {
                ans.push_back(i+1);
                tmp[j] = -1; cnt++;
                if (cnt == k) break;

                break;
            }
        }

        if (cnt == k) break;
    }


    /*
    for (auto i : ans) {
        cout << i << " ";
    }
    */

    int l = 0;


    for (int i = 0 ; i < ans.size() - 1 ; i++) {
        if (i == 0) cout << ans[i] << " ";
        else cout << ans[i] - ans[i-1] << " " ;


        if (i == ans.size() - 2) l = ans[i];
    }



    cout << n - l ;



}


int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
