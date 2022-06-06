#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    string s;
    cin>>s;
    n=s.length();
    vector<char> v;
    bool flag=false;
    for(i=0;i<n;i++)
    {
       if(!flag)
       {
           if(s[i]=='0')
           {
               flag=true;
           }
           else {
               v.push_back(s[i]);
           }
       }
       else {
           v.push_back(s[i]);
       }
    }
    if(!flag)
    {
        v.pop_back();
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
}