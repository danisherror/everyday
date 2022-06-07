#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long i,n;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        long long c[n];
        for(i=0;i<n;i++)
        {
           if(i==0)
           {
               c[i]=b[i]-a[i];
           }
           else {
               if(a[i]<b[i-1])
               {
                   c[i]=b[i]-b[i-1];
               }
               else {
                   c[i]=b[i]-a[i];
               }
           }
        }
        for(i=0;i<n;i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
}