#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,d1=0,d2=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==100)
        {
            d1++;
        }
        else {
        d2++;
        }
    }
    if(d1%2==1)
    {
        cout<<"NO";
    }
    else if(d1==0 && d2%2==1)
    {
        cout<<"NO";
    }
    else {
    cout<<"YES";
    }
}