//<BOZEID>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t , cnt = INT_MIN; cin >> t;
    for (int i = 0 ; i < t ; i++) {
        int x; cin >> x;
        cnt = max(x , cnt);
    }
    cout << cnt <<endl;
    return 0;
}
