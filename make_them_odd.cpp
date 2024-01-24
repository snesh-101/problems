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
    cin >> t;
    while (t--) {
        set<ll> s;
        vector<ll> v;
        ll a;
        cin >> a;
        for (ll i = 0; i < a; i++) {
            ll b;
            cin >> b;
            if(b%2==0)
            s.insert(b);
        }
        ll c=0;
       while(!s.empty())
        {
            ll g=*(s.rbegin());
            s.erase(g);
            if(g%2==0)
            {
                c++;
                s.insert(g/2);
            }
        }
      cout<<c<<endl;
    }

    return 0;
}
