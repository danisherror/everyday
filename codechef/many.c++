#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n,d=1,i;
        cin>>n;
        n=n-1;
        string s;
        cin>>s;
        for(i=0;i<n-1;i++)
        {
            if(s[i]=='1' && s[i+1]=='0')
            {
                d++;
            }
        }
        cout<<d<<endl;
    }
}