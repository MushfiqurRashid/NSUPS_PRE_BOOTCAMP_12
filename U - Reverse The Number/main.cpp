#include <bits/stdc++.h>
#define endl "\n"
#define fio() ios_base:: sync_with_stdio(false), cin.tie(0)

using namespace  std;

int main() {
    fio();
    int t;
    cin>>t;
    while (t--)
    {
        int num, rev = 0, remainder;

        cin>>num;
        while (num != 0) {
            remainder = num % 10;
            rev = rev * 10 + remainder;
            num /= 10;
        }
        cout<<rev<<endl;
    }

    return 0;
}
