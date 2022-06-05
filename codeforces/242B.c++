#include<bits/stdc++.h>
using namespace std;
int main()
{
    long i,n;
    cin>>n;
    vector<pair<long,long>> v;
    if(n>1)
    {
    for(i=0;i<n;i++)
    {
        long a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    long a,b;
    a=v[0].first;
    b=v[0].second;
    for(i=1;i<n;i++)
    {
        if(a>=v[i].first && b<=v[i].second)
        {
            a=v[i].first;
            b=v[i].second;
        }
    }
    long d=0;
    for(i=0;i<n;i++)
    {
        if(a<=v[i].first && b>=v[i].second)
        {
            d++;
        }
    }
    if(d==n)
    {
        long k=0;
        for(i=0;i<n;i++)
        {
            if(a==v[i].first && b==v[i].second)
            {
                k=i+1;
                break;
            }
        }
        cout<<k;
    }
    else {
    cout<<"-1";
    }
    }
    else {
        long a1,b1;
        cin>>a1>>b1;
        cout<<"1";
    }
}