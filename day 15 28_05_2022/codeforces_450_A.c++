#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m;
    cin>>n>>m;
    vector<int>v;
    vector<int>v1;
    for(i=0;i<n;i++)
    {
        int l;
        cin>>l;
        v.push_back(l);
        v1.push_back(i+1);
    }
    while(v.size()!=1)
    {
        v[0]=v[0]-m;
        if(v[0]<=0)
        {
            v.erase(v.begin());
            v1.erase(v1.begin());
        }
        else {
            v.push_back(v[0]);
            v1.push_back(v1[0]);
            v.erase(v.begin());
            v1.erase(v1.begin());
        }
    }
    cout<<v1[0];
}