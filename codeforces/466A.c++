#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m*a<=b)
    {
        cout<<n*a;
    }
    else
    {
        int d=0;
        int ll;
        ll=n%m;
        d=d+(n/m)*b;
        if(ll!=0)
        {
            if((ll*a)<=b)
            {
                d=d+ll*a;
            }
            else {
                d=d+b;
            }
        }
        cout<<d;
    }
}