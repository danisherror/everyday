#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long i,n,min,max;
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        min=a[0];
        max=a[0];
        if(n==1)
        {
            cout<<"YES\n";
        }
        else {
            bool flag=true;
            for(i=1;i<n;i++)
            {
               if(a[i]<=min)
               {
                   min=a[i];
               }
               else if(a[i]>=max)
               {
                   max=a[i];
               }
               else {
               flag=false;
               break;
               }
            }
            if(flag)
            {
                cout<<"YES\n";
            }
            else {
            cout<<"NO\n";
            }
        }
    }
}