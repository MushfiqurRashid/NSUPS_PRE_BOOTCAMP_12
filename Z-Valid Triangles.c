#include<bits/stdc++.h>
#deifine endl "\n"
#define fio() ios_base::sync_with_stdio(false),cin.tie(0)

using namespace std;
typedef long long ll;

const int N = 1e6;
vector<int>v;


int main()
{
    int a,b,c;

    int t;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c;

        if(a+b+c==180)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
