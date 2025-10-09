/// No problem, let's try again :)
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const ll OO = LLONG_MAX;
const ll N = 1e10 + 5;

vector <ll> num;

void pre() {
    ll cur = 2;

    while (cur <= N) {
        num.push_back(cur);
        cur *= 2;
    }
}


void solve() {
    ll n; cin >> n;
    vector <ll> arr(n);

    map <ll , int> mp , frq;
    set <ll> st;

    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
        mp[arr[i]]++;

        st.insert(arr[i]);
    }

    int cnt = 0;

    for (auto i : st) {
        bool flag = true;

        for (auto j : num) {
            ll trg = j - i;

            if (trg < 0) continue;

            if ((trg == i && mp[trg] > 1)) {
                flag = false;
                break;

            }

            if (trg != i && mp[trg]) {
                flag = false;
                break;
            }            
        }

        if (flag) {
            cnt += mp[i];
        }
    }


    cout << cnt << '\n';
}


int main() {
    ABo_ZeiD;

    pre();

    //freopen("popcorn.in" , "r", stdin);

    int t = 1;

    //cin >> t;
    while (t--)
        solve();

    return 0;
}
