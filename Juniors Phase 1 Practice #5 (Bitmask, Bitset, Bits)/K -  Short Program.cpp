/// ====> Eyad Tahseen <====
//By EyadTaahseen : https://codeforces.com/profile/EyadTahseen

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

void caluc(char a, int b, int &x)
{
    if (a == '|')
    {
        x |= b;
    }   
    else if (a == '&')
    {
        x &= b;
    }
    else
    {
        x ^= b;
    }
}

bool bit(int n, int idx)
{
    // return ((n & (1 << idx)) != 0);
    return ((n >> idx) & 1);
}

void Do_it()
{
    int n; cin >> n;
    vector<pair<char, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    vector<pair<char, int>> ans(2);
    ans[0].first = '|'; ans[0].second = 0;
    ans[1].first = '^'; ans[1].second = 0;
    int inputOne = 1023;
    int inputZero = 0;
    for (auto [a, b] : v)
    {
        caluc(a, b, inputOne);
        caluc(a, b, inputZero);
    }
    for (int i = 0; i < 10; i++)
    {

        if (bit(inputOne, i) == 0 && bit(inputZero, i) == 0)
        {
            ans[0].second |= (1 << i);
            ans[1].second |= (1 << i);
        }
        if (bit(inputOne, i) == 0 && bit(inputZero, i) == 1)
        {
            ans[1].second |= (1 << i);
        }
        if (bit(inputOne, i) == 1 && bit(inputZero, i) == 1)
        {
            ans[0].second |= (1 << i);
        }
    }

    cout << 2 << endl;
    for (auto [a, b] : ans)
    {
        cout << a << ' ' << b << endl;
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
