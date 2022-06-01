#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
   int a[2],b[2],i;
   for(i=0;i<2;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<2;i++)
   {
       cin>>b[i];
   }
   sort(a,a+2);
   sort(b,b+2);
   int k,l;
   k=a[1];
   l=b[1];
   if(k==l)
   {
       cout<<"TIE\n";
   }
   else if(k>l)
   {
       cout<<"Q\n";
   }
   else {
   cout<<"P\n";
   }
    }
}
