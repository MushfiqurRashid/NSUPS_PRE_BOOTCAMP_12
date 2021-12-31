#include <bits/stdc++.h>
#define endl "\n"
#define fio() ios_base:: sync_with_stdio(false), cin.tie(0)

using namespace  std;
int main() {
    fio();
    string st;
    int i = 0;
    while(true)
    {
        cin>> st;
        i++;

        if(st == "*")
            break;

        if(st=="Hajj")
            cout <<"Case "<< i <<": "<< "Hajj-e-Akbar" << endl;

        else if(st == "Umrah")
            cout <<"Case "<< i <<": "<<"Hajj-e-Asghar" <<  endl;


    }
    return 0;
}
