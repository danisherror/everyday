#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t,c;
    cin>>n>>t>>c;
    int a,s=0,d=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a<=t)
        {
            s++;
        }
        else {
        s=0;
        }
        if(s>=c)
        {
            d++;
        }
    }
    cout<<d;
}