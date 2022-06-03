#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m;
    cin>>n>>m;
    char a[n][m];
    int j,d=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]=='W')
            {
                //cout<<i<<" "<<j<<endl;
                if(a[i-1][j]=='P' && i!=0)
                {
                    a[i-1][j]='.';
                    a[i][j]='.';
                    d++;
                }
                else if(a[i][j-1]=='P' && j!=0)
                {
                    a[i][j-1]='.';
                    a[i][j]='.';
                    d++;
                }
                else if(a[i][j+1]=='P' && j!=m-1)
                {
                    a[i][j+1]='.';
                    a[i][j]='.';
                    d++;
                }
                else if(a[i+1][j]=='P' && i!=n-1)
                {
                    a[i+1][j]='.';
                    a[i][j]='.';
                    d++;
                }
            }
        }
    }
    cout<<d;
}