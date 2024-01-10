 #include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);

    map <int, string> m={{7,"gygyu"},{3,"yuy"}};
    for (auto it =m.begin(); it!=m.end(); it++)
    {
        cout<<(*it).first<<" "<<it->second<<endl;
       
    }
    cout<<endl;
    for(auto &value: m)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    //find operation to find any value and return it as an iterator
    auto it =m.find(3);
    if(it==m.end())
    {
        cout<<"no val";
    }
    else
        cout<<it->first<<" "<<it->second<<endl;
    //erase keyword erases a particular key and its value from the map
    m.erase(3);
    return 0;
}