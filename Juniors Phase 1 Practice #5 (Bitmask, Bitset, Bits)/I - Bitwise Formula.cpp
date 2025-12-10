/// ====> Eyad Tahseen <==== 
//by EyadTahseen : https://codeforces.com/profile/EyadTahseen

#include <bits/stdc++.h>
#define endl '\n'
// #define int long long
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
using namespace std;

map<string, string> mp;
vector<string> arr0, arr1;
void op(vector<vector<string>> &v, int &n, int &m, char bit)
{
    string q(1, '?'), ansq(m, bit); mp[q] = ansq;
    for (int i = 0; i < n; i++)
    {
        if (v[i].size() == 3)
        {
            mp[v[i][0]] = v[i][2];
        }
        else 
        {
            bitset<1000> a(mp[v[i][2]]), b(mp[v[i][4]]);
            string curr, fitcurr;
            if (v[i][3] == "AND")
            {
                curr = (a & b).to_string();
            }
            else if (v[i][3] == "OR")
            {
                curr = (a | b).to_string();
            }           
            else if (v[i][3] == "XOR")
            {
                curr = (a ^ b).to_string();
            }
            for (int j = 1000 - m; j < 1000; j++)
            {
                fitcurr += curr[j];
            }
            mp[v[i][0]] = fitcurr;
        }
        if (bit == '1')
        {
            arr1.push_back(mp[v[i][0]]);
        }
        else
        {
            arr0.push_back(mp[v[i][0]]);
        }
    }
}

int value(int &n, int &idx, char bit)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (bit == '1')
        {
            sum += (arr1[i][idx] == '1');
        }
        else
        {
            sum += (arr0[i][idx] == '1');
        }
    }
    return sum;
}

void Do_it()
{
    int n, m; cin >> n >> m;
    vector<vector<string>> v(n);
    for (int i = 0; i < n; i++)
    {
        string a, b, c, d, e; cin >> a >> b >> c;
        v[i].push_back(a); v[i].push_back(b); v[i].push_back(c);
        if (!(c[0] == '1' || c[0] == '0'))
        {
            cin >> d >> e; v[i].push_back(d); v[i].push_back(e);
        }
    }
    op(v, n, m, '1'); op(v, n, m, '0');
    
    string mn, mx;
    for (int i = 0; i < m; i++)
    {
        int sum1 = value(n, i, '0');
        int sum2 = value(n, i, '1');
        mx.push_back((sum1 >= sum2) ? '0' : '1');
        mn.push_back((sum1 <= sum2) ? '0' : '1');
    }
    cout << mn << endl;
    cout << mx << endl;
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
