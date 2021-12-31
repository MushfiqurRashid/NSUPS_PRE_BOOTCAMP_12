#include <bits/stdc++.h>
#define endl "\n"
#define fio() ios_base:: sync_with_stdio(false), cin.tie(0)

using namespace std;
vector<int> v;

int main() {
    int n , sum = 0;
    cin >> n;
    v.reserve(n+1);

    for(int i = 0 ; i < n ; i++){
        int a; cin >> a;
        sum += a;
    }


    cout << sum << endl;

    return 0;
}
