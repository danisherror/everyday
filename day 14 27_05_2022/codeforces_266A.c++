#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    string s;
    cin>>s;
    int d=0;
    for(i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            d++;
        }
    }
    cout<<d;
}