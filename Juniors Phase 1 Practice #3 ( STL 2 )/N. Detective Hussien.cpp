/// No problem, let's try again :)
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define ll long long
#define all(x) x.begin(), x.end()
#define input(vec) for (auto& i : vec) cin >> i
#define inputone(vec , x) for (int i = 1 ; i <= x ; i++) cin >> vec[i]
#define ABo_ZeiD ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

namespace __gnu_pbds{
    typedef tree<ll,
            null_type,
            less<ll>,
    rb_tree_tag,
    tree_order_statistics_node_update> ordered_set;
}

using namespace __gnu_pbds;


/*

if (m != n) m4 m7taga m4 eqauls faaaa aked (NO)


now i have 2 cases:

every line on a = line on b

ans on equation we calc. based on it's value

انا عايز
equation of a == equation of b
اي كان بقي الطريقة اللي هتتعمل بيها

يهمني ان ال value هتتحط في المكان الصح

if (yes) {
    line (a) must be = line (b)


    f ->   a = 1 , b = 2 , c = 3
       a = b + c  -> [1 = 2 + 3]


    s -> a = 1 , b = 2 , c = 3
     a = b + c  ->  [1 = 2 + 3]
}

*/

string trns (ll n) {
    string ttt = "";

    while (n > 0) {
        ttt += (n%10) + '0';
        n /= 10;
    }

    reverse(all(ttt));

    return ttt;
}



void solve() {
    int n , m , N , M; cin >> n; N = n;
    string tp , s , x;

    stack <pair <string , string>> a , b;
    map <string , ll> mp;

    ll cur = 1;
    while (n--) {
        cin >> tp;

        if (tp == "define") {
            cin >> s;

            mp[s] = cur;

            x = trns(mp[s]);

            a.push({x , "d"});

            cur++;
        }

        else if (tp == "read") {
            cin >> s;

            x = trns(mp[s]);
            a.push({x , "r"});
        }

        else if (tp == "print") {
            cin >> s;
            x = trns(mp[s]);
            a.push({x , "p"});
        }

        else {
            string cr = "", tmp = "";
            for (auto i : tp) {
                if (i >= 'a' && i <= 'z') cr += i;

                else {
                    if (!cr.empty()) {
                        string c = trns(mp[cr]);

                        tmp += c;

                        cr = "";
                    }
                }
            }

            if (!cr.empty()) {
                string c = trns(mp[cr]);

                tmp += c;
            }

            //cout << tmp << "\n";

            a.push({tmp , "e"});
        }

    }


    cin >> m; M = m;

    cur = 1;
    while (m--) {
        cin >> tp;

        if (tp == "define") {
            cin >> s;

            mp[s] = cur;

            x = trns(mp[s]);

            b.push({x , "d"});

            cur++;
        }

        else if (tp == "read") {
            cin >> s;
            x = trns(mp[s]);
            b.push({x , "r"});
        }

        else if (tp == "print") {
            cin >> s;
            x = trns(mp[s]);
            b.push({x , "p"});
        }

        else {
            string cr = "", tmp = "";
            for (auto i : tp) {
                if (i >= 'a' && i <= 'z') cr += i;

                else {
                    if (!cr.empty()) {
                        string c = trns(mp[cr]);

                        tmp += c;

                        cr = "";
                    }
                }
            }

            if (!cr.empty()) {
                string c = trns(mp[cr]);

                tmp += c;
            }

            //cout << tmp << "\n";

            b.push({tmp , "e"});
        }

    }

    //cout << n << " " << m << '\n'; // ya allah

    if (M != N) {
        cout << "NO" << '\n';
        return;
    }


    /*
    while (!a.empty()) {
        cout << a.top().first << " " << a.top().second << '\n';
        a.pop();
    }

    cout << '\n';

    while (!b.empty()) {
        cout << b.top().first << " " << b.top().second << '\n';
        b.pop();
    }
    */




    while (!a.empty()) {
        if (a.top() != b.top()) {
            cout << "NO" << '\n';
            return;
        }

        a.pop(); b.pop();
    }

    cout << "YES" << '\n';



    /*
    for (auto [a , b] : mp) {
        cout << a << " " << b << '\n';
    }

     */

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
