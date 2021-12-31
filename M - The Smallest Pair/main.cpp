#include <bits/stdc++.h>
#define endl "\n"
#define fio() ios_base:: sync_with_stdio(false), cin.tie(0)

using namespace std;

int main() {
    fio();
    int t ;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;
        vector<int> v(a);
        for(int i = 0; i < a ; i++ )
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());

        cout << v[0] + v[1] << endl;

    }
    return 0;
}
