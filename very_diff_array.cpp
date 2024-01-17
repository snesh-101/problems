#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll a;
    cin >> a;

    while (a--)
    {
        ll n, m;
        cin >> n >> m;
        int x[n];
        int y[m];

        for (ll i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        for (ll i = 0; i < m; i++)
        {
            cin >> y[i];
        }

        sort(x, x + n);
        sort(y, y + m);

        ll dif = 0, left=0, right=n-1, l=0, r=m-1;
        while(l<=right)
        {
            ll g=abs(x[left]-y[r]);
            ll c=abs(x[right]-y[l]);
            if(g>=c)
            {
                dif+=g;
                left++;
                r--;
            }x
            else
            {
                dif+=c;
                l++;
                right--;
            }

        }
       
        cout << dif << endl;
    }
}