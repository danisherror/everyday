#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n,k;
        cin>>n>>k;
        //int l;
        if(n%2==0)
        {
            if(k==2)
            {
                cout<<"ODD\n";
            }
            else {
            cout<<"EVEN\n";
            }
        }
        else {
            if(k==1 || k==2)
            {
                cout<<"ODD\n";
            }
            else {
            cout<<"EVEN\n";
            }
        }
    }
}