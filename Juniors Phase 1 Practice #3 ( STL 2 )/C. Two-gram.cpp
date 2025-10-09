#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0; string res;
    for (int i = 0; i < n -1 ; i++) {
        int cnt = 0;
        for (int j = 0; j < n -1 ; j++) {
            if (s[i] == s[j] && s[i+1] == s[j+1]) cnt++;
        }
        if (ans < cnt) {
            ans = cnt;
            res = string(1 ,s[i]) + string(1 ,s[i + 1]);
        }
    }
    cout << res;
    return 0;
}
