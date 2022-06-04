#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,a[3],b[3];
    string s,s1;
    cin>>s>>s1;
    n=s.length();
    m=s1.length();
    if(n!=m)
    {
        cout<<"NO";
    }
    else {
        int d=0,j=0;
        bool flag=true;
        for(i=0;i<n;i++)
        {
            if(s[i]!=s1[i])
            {
                d++;
                a[j]=s[i];
                b[j]=s1[i];
                j++;
                if(d>2)
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
        {
            if(a[1]==b[0] && a[0]==b[1])
            {
                cout<<"YES";
            }
            else {
            cout<<"NO";
            }
        }
        else {
        cout<<"NO";
        }
    }
}