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
        ll arr[a], sum=0;
        for(ll i=0; i<a; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        ll m=sum%a;
        ll g=m*(a-m);
        cout<<g<<endl;
    }

}
