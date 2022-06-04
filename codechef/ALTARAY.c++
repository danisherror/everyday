#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int i,n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int b[n];
        b[n-1]=1;
        if(n>1)
        {
        for(i=n-2;i>=0;i--)
        {
            if(a[i]>0 && a[i+1]<0)
            {
                b[i]=1+b[i+1];
            }
            else if(a[i]<0 && a[i+1]>0)
            {
                b[i]=1+b[i+1];
            }
            else 
            {
                b[i]=1;
            }
        }
        }
        for(i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}