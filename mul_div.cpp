#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'
void solve()
    {
        ll a;
        cin>>a;
       cin.ignore();
        string s, h,d;
        cin>>s;
        cin>>h>>d;
        vector <int> v(a,0);
        for(ll i=0; i<a; i++)
        {
            if (d[i]==s[i])
            {
                v[i]++;
            }
         
         }
            for(ll i=0; i<a; i++)
        {
            if (d[i]==h[i])
            {
                v[i]++;
            }
         
         }
         ll f=0;
         for(ll i=0; i<a; i++)
         {
           if(v[i]==0)
           {
            f=1;
            break;
           }
         }
         if(f==1)
            cout<<"YES";
        else
            cout<<"NO";
         cout<<endl;
    }
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}