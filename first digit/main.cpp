 #include <bits/stdc++.h>
#define endl "\n"
#define fio() ios_base:: sync_with_stdio(false),cin.tie(0)

using namespace std;
int main() {
    fio();
    int t; cin>>t;
    while (t--)
    {
        int num;
        cin>>num;
        string st;
        st = to_string(num);
        int firstNumber = st[0] - '0';
        int lastNumber = st[st.size()-1] - '0';

        cout << firstNumber  + lastNumber << endl;
    }
    return 0;
}
