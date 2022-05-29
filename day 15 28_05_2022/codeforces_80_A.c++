#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m;
    cin>>n>>m;
    if(n<=2)
    {
        if(m==3)
        {
            cout<<"YES";
        }
        else {
            cout<<"NO";
        }
    }
    else {
    for(i=n+1;;i++)
    {
        bool flag=true;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            if(i==m)
            {
                cout<<"YES";
            }
            else {
            cout<<"NO";
            }
            break;
        }
    }
    }
}