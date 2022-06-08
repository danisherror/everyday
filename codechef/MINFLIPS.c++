#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q;
    cin>>q;
    while(q--)
    {
        int i,n;
        cin>>n;
        int a[n],d=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            d=d+a[i];
        }
        if(d==0)
        {
            cout<<"0\n";
        }
        else if(d>0)
        {
            if(d%2==1)
            {
                cout<<"-1\n";
            }
            else {
                d=d/2;
                cout<<d<<endl;
            }
        }
        else {
            d=d*(-1);
            if(d%2==1)
            {
                cout<<"-1\n";
            }
            else {
                d=d/2;
                cout<<d<<endl;
            }
        }
    }
}