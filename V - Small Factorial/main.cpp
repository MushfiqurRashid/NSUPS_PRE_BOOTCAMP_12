#include <bits/stdc++.h>
#define endl "\n"
#define fio() ios_base:: sync_with_stdio(false), cin.tie(0)

using namespace std;

vector<int>v;

int main() {
    fio();
    int sum = 1;
    int t; cin>>t;
    while(t--)
    {

        int n;
        cin >> n;

        for(int i = 1 ; i <= n ; i++){
            v.push_back(i);
        }

        for(int i = 0 ; i < v.size() ;i++){
            sum *= v[i];
        }

        cout << sum << endl;
        v.clear();
        sum = 1;
    }


    return 0;
}
