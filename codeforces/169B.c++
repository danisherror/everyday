#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,k;
    string s,s1;
    cin>>s>>s1;
    n=s.length();
    m=s1.length();
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        a[i]=s[i]-48;
    }
    for(i=0;i<m;i++)
    {
        b[i]=s1[i]-48;
    }
    k=m-1;
    sort(b,b+m);
    for(i=0;i<n&& k>=0;i++)
    {
        if(a[i]<b[k])
        {
            a[i]=b[k--];
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}