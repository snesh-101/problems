#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, o=0, e=0;
        cin>>a;
        a=a*2;
        ll arr[a];
        for(ll i=0; i<a; i++)
        {
           cin>>arr[i];
        }
        for(ll i=0; i<a; i++)
        {
           if(arr[i]%2==0)
            e++;
            else
                o++;
        }
        //<<o<<" "<<e<<endl;
        if(o==e)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
