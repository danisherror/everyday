#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,m;
    cin>>n;
    long long d=0;
    for(i=0;i<n;i++)
    {
        cin>>m;
        d=d+(m-1)*(i+1)+1;
    }
    cout<<d;
}