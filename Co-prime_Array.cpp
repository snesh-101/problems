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
    ll a;
    cin>>a;
    ll arr[a];
    vector <int> v;
    for(ll i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    v.push_back(arr[0]);
    ll c=0;
    for(ll i=0; i<a-1; i++)
    {
        ll g=1;
        if(g==1)
            continue;
        else 
        {
            v.push_back(1);
        }
    }
       for(auto i: v)
       {
        cout<<i<<" ";
       }   

}
