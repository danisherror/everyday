#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int i,n;
        cin>>n;
        int ll;
        ll=180-n;
        if(360%ll==0)
        {
            cout<<"YES\n";
        }
        else {
        cout<<"NO\n";
        }
    }
}