#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        if(a==1)
        {
            if(b==0)
            {
                cout<<"NO\n";
            }
            else {
            cout<<"YES\n";
            }
        }
        else {
            if(a==2)
            {
                cout<<"YES\n";
            }
            else {
                if(a%2==0)
                {
                    cout<<"YES\n";
                }
                else {
                    if(b==0)
                    {
                        cout<<"NO\n";
                    }
                    else {
                    cout<<"YES\n";
                    }
                }
            }
        }
    }
}
