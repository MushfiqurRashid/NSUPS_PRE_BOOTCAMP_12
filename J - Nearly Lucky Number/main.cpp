#include<bits/stdc++.h>
#include<string>
#define ln "\n"

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string st ; cin >> st;
    int count = 0;

    for(int i=0;i<st.length();i++)
    {
        if((st[i]=='4' || st[i] == '7') )
            count++;
    }

    if(count == 4 || count == 7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
