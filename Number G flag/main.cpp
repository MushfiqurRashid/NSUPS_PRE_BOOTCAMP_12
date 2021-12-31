#include <bits/stdc++.h>
#define endl "\n"
#define fio() ios_base:: sync_with_stdio(false), cin.tie(0)
#define PI acos(-1)
using namespace std;

int main() {
    fio();
    double length,width=0,radius=0;
    double red=0, green=0;
    int t;
    cin>>t;

    while(t--)
    {
        cin>>length;
        radius = length/5.0;
        width = (length *6)/10.0;
        red = PI*radius*radius;
        green = (length*width)-red;

        cout<< fixed <<setprecision(2);
        cout<<red<<" "<<green<<endl;

    }
    return 0;
}
