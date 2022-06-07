#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int i,n,d1,d2,d3;
        cin>>n;
        if(n%3==0)
        {
            d1=(n/3);
            d2=(n/3)+1;
            d3=(n/3)-1;
        }
        else if(n%3==1)
        {
            d1=n/3;
            d2=(n/3)+2;
            d3=(n/3)-1;
        }
        else {
            d1=(n/3)+1;
            d2=(n/3)+2;
            d3=(n/3)-1;
        }
        cout<<d1<<" "<<d2<<" "<<d3<<endl;
    }
}