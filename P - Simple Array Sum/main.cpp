#include <bits/stdc++.h>
#define endl "\n"
#define fio() ios_base:: sync_with_stdio(false), cin.tie(0)

using namespace std;
vector<int> v;

int main() {
    fio();
    int n,sum=0;
    cin>>n;
    int arr[n];

    for(int i=1;i<=n;i++)
            cin>>arr[i];


    for(int i=1;i<=n;i++)
    {
        sum = sum+arr[i];
    }
    cout<<sum<<endl;

    return 0;
}
