/// ====> Eyad Tahseen <====
//by EyadTahseen : https://codeforces.com/profile/EyadTahseen

#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define ll long long
#define ld long double
#define pi (2 * acos(0.0))
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define EnterData(v) for(auto& i : v) cin >> i;
#define fixed(n) cout << fixed << setprecision(n);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define Contestor cin.tie(nullptr); cout.tie(nullptr); ios_base::sync_with_stdio(false);
#define pq priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>
using namespace std;

vector<int> factorization(int n)
{
    vector<int> ans;
    for (int i = 1; i * i <= n; i++)
    {
        if (!(n % i))
        {
            ans.push_back(i);
            if (i * i != n)
            {
                ans.push_back(n / i);
            }
        }
    }
    // sort(all(ans));
    return ans;
}

bool fn(int n, int it)
{
    bool ok = 1;
    for (int i = 0; i < it; i++)
    {
        if ((n - 1) % it != 0)
        {
            ok = 0; break;
        }
        n = (n - 1) - ((n - 1) / it);
    }
    if (n % it != 0)
    {
        ok = 0;
    }
    return ok;
}

void Do_it()
{
    int n;
    while (cin >> n && n >= 0)
    {
        vector<int> v = factorization(n - 1);
        int ans = -1;
        for (auto it : v)
        {
            if (fn(n, it) && n % it != 0)
            {
                ans = max(ans, it);
            }
        }
        if (ans == -1)
        {
            cout << n << " coconuts, no solution" << endl; continue;
        }
        cout << n << " coconuts, " << ans << " people and 1 monkey" << endl;
    }
}

int32_t main()
{
    Contestor
    //freopen("name.in", "r", stdin);
    int test_cases = 1;
    //cin >> test_cases;
    while (test_cases--) Do_it();
    return 0;
}
