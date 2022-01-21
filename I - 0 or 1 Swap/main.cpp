#include <bits/stdc++.h>
#define endl "\n"
#define fio() ios_base:: sync_with_stdio(false), cin.tie(0)

using namespace std;
vector<int> v;
int main() {
    fio();
    int count=0;
    int t;
    cin>>t;

    for(int i = 1; i < t ; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }

    for(int i=0; i< v.size();i++)
    {
        if(v[i]!= i+1)
            count++;
    }
    if(count <= 2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



    return 0;
}
