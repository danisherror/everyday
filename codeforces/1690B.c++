#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long d=0,i,n;
        cin>>n;
        long long a[n],b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            if((a[i]-b[i])>d)
            {
                d=a[i]-b[i];
            }
        }
        bool flag=true;
        for(i=0;i<n;i++)
        {
            if(a[i]-b[i]<d && b[i]!=0)
            {
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