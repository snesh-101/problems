#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'
bool prime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b, j=0;
    cin>>a>>b;
    vector <int> v;
    for(ll i=2; i<=a; i ++)
    {
        if(prime(i))
        {
            v.push_back(i);
        }
    }
    vector <int> n;
    ll c=0;
    for(ll i=0; i<v.size()-1; i++)
    {
        
        ll g=v[i]+v[i+1]+1;
        n.push_back(g);
    }
    for(ll i=0; i<n.size(); i++)
    {
        if(prime(n[i])&&n[i]<=a)
            c++;
    }
    if(c>=b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
