#include <iostream>
#include <string>
using namespace std;
int main ()
{
   int a;
   cin>>a;
   int f=1;
   string s=to_string(a);
   for(int i=0; i<s.length(); i++)
   {
    if(s[i]=='4'||s[i]=='7')
    {
        f=0;
    }
    else
    {
        f=1;
        break;
    }
   }
   int f1=9, b=0, c=0;
   if(f==0)
   cout<<"YES"<<endl;
   else
   {
    for(int i=4; i<a; i++)
    {c=0;
        string p=to_string(i);
        for(int j=0; j<p.length(); j++)
        {
            if(p[j]=='4'||p[j]=='7')
    {
        c++;
    }
        }
        
          if(c==p.length() && a%i==0)
    {
            b=1;
            break;
    }
    }
    if(b==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
   }
}