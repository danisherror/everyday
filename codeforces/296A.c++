#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    int b[1001]={0};
    bool flag=true;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
        if(b[a[i]]>(n+1)/2)
        {
            flag=false;
        }
    }
    if(flag)
    {
        cout<<"YES";
    }
    else {
    cout<<"NO";
    }
}