#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int sz=1e6+10;
bool vis[sz + 1];
vector <int> prime;
void linear_seive() {
    vis[0] = vis[1] = 1;
    for (int i = 2 ; i <= sz ; i++) {
        if (!vis[i]) {
            prime.push_back(i);
        }
        for (int j =0 ; j < prime.size() && i*prime[j]<=sz ; j++) {
            vis[i* prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    linear_seive();
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        double s1 = sqrt(n); ll s2 = sqrt(n);
        if (vis[s2] == 0 && s1 == s2 && s1 != 1) {
            cout << "YES" << endl; continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}
