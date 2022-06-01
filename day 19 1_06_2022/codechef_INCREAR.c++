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
        if((a%2==0 && b%2==0) || (a%2==1 && b%2==1))
        {
            if(a==b)
            {
                cout<<"0\n";
            }
            else if(a>b)
            {
                int ll;
                ll=(a-b)/2;
                cout<<ll<<endl;
            }
            else {
                int ll;
                ll=b-a;
                cout<<ll<<endl;
            }
        }
        else {
            if(a==b)
            {
                cout<<"0\n";
            }
            else if(a>b)
            {
                int ll;
                ll=((a-b)/2) +(2);
                cout<<ll<<endl;
            }
            else {
                int ll;
                ll=b-a;
                cout<<ll<<endl;
            }
        }
    }
    
}