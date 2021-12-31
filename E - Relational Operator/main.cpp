#include <bits/stdc++.h>
#define endl "\n"
#define fio() ios_base:: sync_with_stdio(false), cin.tie(0)

using namespace std;
int main() {
    fio();
    int t; cin>>t;
    while(t--)
    {
        int num1,num2;
        cin>>num1>>num2;

        if(num1>num2)
            cout<<">"<<endl;
        else if(num1<num2)
            cout<<"<"<<endl;
        else
            cout<<"="<<endl;
    }
    return 0;
}
