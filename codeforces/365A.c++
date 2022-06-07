#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,d=0,k,p;
    cin>>n>>k;
    p=k;
    for(i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int nn,aa;
        nn=s.length();
        bool flag=true;
        int bb[10]={0};
        for(int j=0;j<nn;j++)
        {
            aa=s[j]-48;
            if(aa<=k)
            {
                bb[aa]++;
            }
        }
        for(int ii=0;ii<=k;ii++)
        {
            if(bb[ii]==0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            d++;
        }
    }
    cout<<d;
}