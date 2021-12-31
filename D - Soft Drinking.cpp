#include<bits/stdc++.h>
#define endl "\n"
#define fio() ios_base::sync_with_stdio(false),cin.tie(0)

using namespace std;

int main()
{
    fio();
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, l, c, d, p, nl, np;
        cin>>n>>k>>l>>c>>d>>p>>nl>>np;

        int drinks = k*l;
        int toasts = drinks/n;
        int limes = c*d;
        int salts = p/np;

        int ans= min(toasts,limes,salts);

        cout<<ans;

    }


}
