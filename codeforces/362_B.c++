#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,m;
    cin>>n>>m;
    long long a[m];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    if(a[0]==1 || a[m-1]==n)
    {
        cout<<"NO";
    }
    else {
        bool flag=true;
        if(m!=2)
        {
        for(i=0;i<m-2;i++)
        {
            if((a[i]+1==a[i+1]) && (a[i]+2==a[i+2]))
            {
                flag=false;
                break;
            }
        }
        }
        if(flag)
        {
            cout<<"YES";
        }
        else {
        cout<<"NO";
        }
    }
}