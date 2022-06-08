#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long i,a,b,d=0;
        cin>>a>>b;
        if(a%3==0 || b%3==0)
        {
            cout<<"0\n";
        }
        else if(a==b)
        {
            cout<<"1\n";
        }
        else {
            bool flag=true;
            while(true)
            {
                if(a%3==0 || b%3==0 )
                {
                    flag=false;
                    break;
                }
                else {
                    if(a>b)
                    {
                        a=abs(a-b);
                    }
                    else {
                        b=abs(a-b);
                    }
                    d++;
                }
            }
            cout<<d<<endl;
        }
    }
}