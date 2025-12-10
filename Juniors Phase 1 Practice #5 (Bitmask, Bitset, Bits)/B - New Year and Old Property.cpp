#include <bits/stdc++.h>
#define int long long
using namespace std;
int a,b,ans=0;
bool f(int val) {
    return val >= a && val <= b;
}

signed  main() {
    cin >> a >> b;
    for(int i = 1; i<=62 ;i++){
        int cnt = 0;
        for(int j = 0 ; j<i ; j++)cnt |= (1ll<<j);
        for(int j = 0 ; j<i-1 ; j++){
            ans += f(cnt & (~(1ll<<j)));
        }
    }
    cout << ans << endl;

    return 0;
}
