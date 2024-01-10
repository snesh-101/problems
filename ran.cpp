 #include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);

      vector <int> v={1,2,4,5,5};
      vector <int> ::iterator it=v.begin();
      for(it; it<v.end(); it++)
      {
        cout<<*(it)<<" ";
      }
    return 0;
} #include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    //freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    ll t;
    cin >> t;

    while (t--) {
        ll a;
        cin >> a;

        ll arr[a + 1][a];
        for (ll i = 1; i <= a; i++) {
            for (ll j = 1; j <= a - 1; j++) {
                cin >> arr[i][j];
            }
        }
         ll c[a];
        for(int i=1; i<=a; i++)
        {
            c[i]=0;
        }
        ll g=0, j;
       for(int i=1; i<=a-1; i++)
        {
            for( j=1; j<=a; j++)
            {
                c[arr[j][i]]++;
                if(c[arr[j][i]]==a-1)
                {
                   cout<<arr[j][i]<<" ";
                    g=arr[j][i];
                    break;
                }
            }
            if(g==arr[j][i])
                break;
        }
          for(int i=1; i<=a; i++)
        {
           if(arr[i][1]!=g)
           {
            g=i;
            break;
           }
        }
        for(int i=1; i<=a-1; i++)
        {
            cout<<arr[g][i]<<" ";
        }
        //  for (int i = 1; i <= a-1 ; i++) {
        //     if (arr[1][i] != g) {
        //         cout << arr[1][i] << " ";
        //     }
        // }
        
     
        cout<<endl;
    }

    return 0;
}