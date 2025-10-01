#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;

const int dx[] = {0 , 0 , 0  , 1 , 1 , 1  , -1 , -1 , -1};
const int dy[] = {0 , 1 , -1 , 0 , 1 , -1 , 0  , 1  , -1};

void solve() {
    int n; cin >> n;
    vector <ll> arr(n) , tmp(n);

    for (int i =0 ; i < n ; i++) {
        cin >> arr[i]; tmp[i] = arr[i];
    }


    ll num[] = {0 , 1 , -1} , ans = INT_MAX;

    for (int i =0 ; i < 3 ; i++) {

        for (int j =0 ; j < 3 ; j++) {
           tmp = arr;
           tmp[0] += num[i]; tmp[1] += num[j];

           ll cur = tmp[1] - tmp[0] , cnt = (num[i] != 0) + (num[j] != 0);


           bool flag = true;
           for (int k = 2 ; k < n ; k++) {
                ll dif = tmp[k] - tmp[k-1];

                if (dif == cur) continue;

                else if (abs(cur - dif) == 1) {
                    cnt++; tmp[k]++; dif = tmp[k] - tmp[k-1];

                    if (dif == cur) continue;

                    tmp[k]--; tmp[k]--;
                }
                else {
                    flag = false; break;
                }
           }
           if (flag) ans = min(ans , cnt);
        }
    }

    cout << (ans == INT_MAX ? -1 : ans) << endl;
}

int main() {
    ABo_ZeiD;

    //int t; cin >> t;
    //while (t--)
        solve();

    return 0;
}
