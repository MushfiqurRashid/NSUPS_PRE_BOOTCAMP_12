#include<bits/stdc++.h>
#define endl "\n"
#define fio() ios_base::sync_with_stdio(false),cin.tie(0)

using namespace std;

int main()
{
    fio();
    int t;
    cin>>t;
    cin.ignore();
    char ch;

    while(t--)
    {
        cin>>ch;
        if(ch == 'b' || ch == 'B')
            cout<<"BattleShip"<<endl;
        else if(ch=='c' || ch=='C')
            cout<<"Cruiser"<<endl;
        else if(ch=='d' || ch=='D')
            cout<<"Destroyer"<<endl;
        else
            cout<<"Frigate"<<endl;

    }

}
