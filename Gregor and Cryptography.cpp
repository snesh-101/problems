#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        if(a%2==0)
            cout<<2<<" "<<a<<endl;
        else
        cout<<2<<" "<<a-1<<endl;
    }
}
