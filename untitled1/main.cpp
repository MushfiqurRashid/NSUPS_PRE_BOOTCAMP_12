#include <bits/stdc++.h>
#define endl "\n"
#define fio() ios_base:: sync_with_stdio(false), cin.tie(0)

using namespace std;
vector<int> v;
set<int>s;
map<int , int>mp;

int main() {
    fio();
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        int a ; cin >> a;
        v.push_back(a);
        s.insert(a);
        mp[a]++;
    }

    for(auto s : v)
        cout << s << endl;

    cout << "set : "<< endl;

    for(auto ss : s)
        cout << ss << " ";

    cout << "map : " << endl;

    for(auto m : mp)
        cout << m.first << " " << m.second << endl;
    return 0;
}
