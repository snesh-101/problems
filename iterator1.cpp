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
      //for pairs
      vector <pair<int,int>> p={{1,2},{3,4}};
      vector <pair<int,int>> ::iterator i=p.begin();
      for(i; i<p.end(); i++)
      {
        cout<<(*i).first<<" "<<(*i).second<<endl;
      }
    return 0;
}