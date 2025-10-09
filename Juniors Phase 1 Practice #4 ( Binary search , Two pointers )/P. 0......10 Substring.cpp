/// No problem, let's try again :)
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;



bool can(int mp[]) {
    bool flag = true;

    for (int i = 2; i <=9; i++){
        if(!mp[i]) flag=0;
    }

    if(flag && (mp[10] >= 2|| (mp[0] && mp[1] && mp[10]))){
        return true;
    }

    return false;
}


void solve() {
   int n; cin >> n;
   for (int i = 1 ; i <= n ; i++) {

        string s; cin >> s;
        cout << "Case " << i << ": ";

        int mp[11] = {0};

        int sz = s.length() , l = 0 , r = 0 , cur = INT_MAX , ansl = 0 , ansr = 0;

        while (l < sz) {
            while (r < sz && !can(mp)) {
                if (r > 0 && s[r] == '0' && s[r - 1] == '1') {
                    mp[10]++; mp[1]--;
                    r++;
                }

                else {
                    mp[s[r] - '0']++;
                    r++;
                }
            }

            if (cur > r - l && can(mp)) {
                cur = r - l; ansl = l , ansr = r;
            }

            if (l + 1 < sz && s[l] == '1' && s[l + 1] == '0') {
                mp[10]-- , mp[0]++;
            }

            else {
                mp[s[l] - '0']--;
            }

            l++;
        }



        if (cur == LONG_MAX) {
            cout << "NO" << '\n'; continue;
        }

        cout << "YES " << ansl + 1 << " " << ansr << '\n';

   }

}

int main() {
    ABo_ZeiD;


    //freopen("smallest.in" , "r", stdin);

    int t = 1;

    //cin >> t;
    while (t--)
        solve();


    return 0;
}
