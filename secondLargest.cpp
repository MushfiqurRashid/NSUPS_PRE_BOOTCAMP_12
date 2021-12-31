#include<bits/stdc++.h>
#define endl "\n"
#define fio() ios_base::sync_with_stdio(false),cin.tie(0)

using namespace std;

int main()
{
    fio();
    int t; cin>>t;

    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int amax = max({a,b,c});
        int amin = min({a,b,c});

        int sum = amax + amin;

        int secondLargest = (a+b+c) - sum;

        cout<<secondLargest<<endl;

    }
}
