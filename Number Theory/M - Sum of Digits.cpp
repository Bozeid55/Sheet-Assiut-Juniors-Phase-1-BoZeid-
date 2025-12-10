#include <bits/stdc++.h>
#define ll long long
using namespace std;
int sum_digit (string s){
    int cnt = 0;
    for (int i =0 ; i < s.size() ; i++) {
        cnt += s[i] - '0';
    }
    return cnt;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; cin >> s;
    ll cnt = 0;
    while (s.size() > 1) {
        s = to_string(sum_digit(s));
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
