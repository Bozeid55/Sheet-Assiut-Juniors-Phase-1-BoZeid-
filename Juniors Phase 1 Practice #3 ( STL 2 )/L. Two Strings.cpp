/// No problem, let's try again :)
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve() {
    int n , x; cin >> n;
    string a , b , A , B; cin >> a >> b;
    A = a , B = b;
    
    map <char , multiset <int>> mp;
    vector <int> arr(n);
   
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
        mp[a[i]].insert(arr[i]);
    }
     
   sort (all(A)) , sort (all(B));
   
   if (A != B) {
        cout << "NO" << '\n';
        return;
   }


   for (int i = 0 ; i < n ; i++) {
        if (a[i] == b[i]) {
            continue;
        }

        if (!mp[b[i]].count(arr[i])) {
            cout << "NO" << '\n';
            return;
        }

   }

   cout << "YES" << '\n';
}

int main() {
    ABo_ZeiD;


    //freopen("popcorn.in" , "r", stdin);

    int t = 1;

    cin >> t;
    while (t--)
        solve();

    return 0;
}
