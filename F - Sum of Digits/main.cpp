#include <bits/stdc++.h>
#define endl "\n"
#define fio() ios_base:: sync_with_stdio(false), cin.tie(0)

using namespace  std;

int main() {
    fio();
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        int sum =0;
        string st = to_string(num);

        for(int i=0;i<st.length();i++)
        {
            sum+= st[i] -'0';
        }
        cout<<sum<<endl;
    }

    return 0;
}
