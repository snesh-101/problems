#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'

bool prime(ll n) {
    if (n <= 1) {
        return false;
    }

    for (ll i = 2; i * i <= n; ++i) {
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

    ll t;
    cin >> t;
    while (t--) {
        ll a;
        cin>>a;
        for(ll i=2; i<a; i++)
        {
            if(prime(i))
            {
                ll d=a-i-1;
                if(d%i==0)
                    continue;
                else
                {
                    cout<<i<<" "<<d<<" "<<1<<endl;
                    break;
                }
            }

        }
    }

    return 0;
}
