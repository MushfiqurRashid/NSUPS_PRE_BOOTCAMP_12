#include<bits/stdc++.h>
#define endl "\n"
#define fio() ios_base::sync_with_stdio(false),cin.tie(0)

using namespace std;

/*int ged(int a, int b)

{
    if(b==0)
        return a;
    return (a,b%a);
}*/

int main()
{
    fio();

    int t;
    cin>>t;

    while(t--)
    {
        int num1, num2;

        cin>>num1>>num2;

        int gcd =__gcd(num1,num2);

        cout<<gcd << " "<<((long long) num1*num2)/gcd<<endl;
         cout<<gcd << " "<<(1ll* num1*num2)/gcd<<endl;
    }



}
