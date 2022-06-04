#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c;
    cin>>n>>c;
    if(c==0 && n==0)
    {
        cout<<"0 0";
    }
    else if(n==0)
    {
        cout<<"Impossible";
    }
    else {
        int d,d1;
        if(c>=n)
        {
            if(c!=0)
            {
                d=c;
            d1=(c)+(n-1);
            }
            else {
                d=n;
                d1=n;
            }
            cout<<d<<" "<<d1;
        }
        else {
            d=n;
            if(c!=0)
            {
            d1=(c)+(n-1);
            }
            else {
            d1=n;
            }
            cout<<d<<" "<<d1;
        }
    }
}