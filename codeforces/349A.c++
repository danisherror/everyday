#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    int a25=0,a50=0,a100=0;
    cin>>n;
    int a;
    bool flag=true;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==25 && flag==true)
        {
            a25++;
        }
        else if(a==50 && flag==true)
        {
            if(a25>0)
            {
                a25--;
                a50++;
            }
            else {
            flag=false;
            }
        }
        else {
            if(a50>0 && flag==true)
            {
                if(a25>0)
                {
                    a100++;
                    a25--;
                    a50--;
                }
                else {
                flag=false;
                }
            }
            else
            {
                if(a25>2 && flag==true)
                {
                    a25=a25-3;
                }
                else {
                    flag=false;
                    a100++;
                }
            }
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