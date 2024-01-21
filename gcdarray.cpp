#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'
ll co(ll a, ll b) {
    
    if (a % 2 == 0) {
        a++;
    }

    // Ensure b is odd if it is not
    if (b % 2 == 0) {
        b--;
    }

    // Calculate the number of odd numbers in the range [a, b]
    ll count = (b - a) / 2 + 1;
    return count;
}

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
      ll a, b, o;
      cin>>a>>b>>o;
      if(a==b&&a>1)
        cout<<"YES"<<endl;
      else
      {
        ll n=co(a,b);
        if(o>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
      }

    }
}