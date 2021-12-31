#include <bits/stdc++.h>

#define endl "\n"
#define fio() ios_base:: sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

int main() {
    ll a, b;
    cin >> a >> b;
    ll mx = max(a, b);
    int k = 0, i;
    for (i = 0; i < mx; i++) {
        if (abs(a - i) == abs(b - i)) {
            k = 1;
            break;
        }

    }
    if (k == 1) {
        cout << i << endl;

    } else {
        cout << "IMPOSSIBLE" << endl;

    }
    return 0;
}
