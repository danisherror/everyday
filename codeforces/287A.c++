#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j;
    char a[4][4];
    n=4;
    for(i=0;i<n;i++)
    {
        for(int yy=0;yy<n;yy++)
        {
            cin>>a[i][yy];
        }
    }
    bool fl=false;
    for(i=0;i<n-1;i++)
    {
        bool flag=false;
        for(j=0;j<n-1;j++)
        {
            if(a[i][j]=='#' && a[i+1][j]=='#' && a[i][j+1]=='#')
            {
                flag=true;
            }
            if(a[i][j]=='#' && a[i+1][j]=='#' && a[i+1][j+1]=='#')
            {
                flag=true;
            }
            if(a[i][j]=='#' && a[i][j+1]=='#' && a[i+1][j+1]=='#')
            {
                flag=true;
            }
            if(a[i+1][j]=='#' && a[i][j+1]=='#' && a[i+1][j+1]=='#')
            {
                flag=true;
            }
            if(flag)
            {
                break;
            }
        }
        if(flag)
        {
            fl=true;
            break;
        }
    }
    if(fl)
    {
        cout<<"YES\n";
    }
    else {
        for(i=0;i<n-1;i++)
    {
        bool flag=false;
        for(j=0;j<n-1;j++)
        {
            if(a[i][j]=='.' && a[i+1][j]=='.' && a[i][j+1]=='.')
            {
                flag=true;
            }
            if(a[i][j]=='.' && a[i+1][j]=='.' && a[i+1][j+1]=='.')
            {
                flag=true;
            }
            if(a[i][j]=='.' && a[i][j+1]=='.' && a[i+1][j+1]=='.')
            {
                flag=true;
            }
            if(a[i+1][j]=='.' && a[i][j+1]=='.' && a[i+1][j+1]=='.')
            {
                flag=true;
            }
            if(flag)
            {
                break;
            }
        }
        if(flag)
        {
            fl=true;
            break;
        }
    }
    if(fl)
    {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
    }
}