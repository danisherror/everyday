#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    string s;
    cin>>s;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        a[i]=s[i]-48;
    }
    for(i=n;i<2*n;i++)
    {
        b[i-n]=s[i]-48;
    }
    sort(a,a+n);
    sort(b,b+n);
    int k=0,l=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            k++;
        }
        if(a[i]<b[i])
        {
            l++;
        }
    }
    if(k==n || l==n)
    {
        cout<<"YES";
    }
    else {
    cout<<"NO";
    }
}