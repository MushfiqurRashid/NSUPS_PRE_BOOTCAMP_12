#include <iostream>
#include <bits/stdc++.h>
#define fio() ios_base::sync_with_stdio(false),cin.tie(0)

using namespace std;

map<int , int > mp;

int main() {
    fio();

    int n;
    cin >> n;

    for(int i = 1 ; i<= n ; i++){
        int a , b; cin >> a >> b;
        mp[a] = b;
    }

    for(auto it = mp.begin() ; it != mp.end() ; it++){
        cout << (*it).first + (*it).second << endl;
    }
    return 0;
}
