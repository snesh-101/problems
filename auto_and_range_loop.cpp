 #include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);

      vector <int> v={1,2,4,5,5};
      for(int &value: v)
      { value++;
        cout<<value<<" ";
      }
      cout<<endl;
      for(int value: v)
      {
        cout<<value<<" ";
      }
      cout<<endl;
      // auto keyword autmatically assumes the datatype
      for(auto &value: v)
      {
        cout<<value<<" ";
      }
      cout<<endl;
      //auto keyword can be used for iterators too, so we don't need to define iterators beforehand 
      for(auto it=v.begin(); it!=v.end(); it++)
      {
          cout<<(*it)<<" ";
      }
    return 0;
}