#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n,m,s=0;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>m;int b[m];
        for(int i=0;i<m;i++)
        {
            cin>>b[i];s=s+b[i];
        }
        long long int r=s%n;
        cout<<a[r]<<endl;

    }
}