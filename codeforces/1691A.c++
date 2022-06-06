#include<bits/stdc++.h>
using namespace std;
int main()
{
  int q;
  cin>>q;
  while(q--)
  {
      int i,n,d1=0,d2=0;
      cin>>n;
      long a;
      for(i=0;i<n;i++)
      {
          cin>>a;
          if(a%2==0)
          {
              d1++;
          }
          else {
          d2++;
          }
      }
      if(d1<=d2)
      {
          n=d1;
      }
      else {
      n=d2;
      }
      cout<<n<<endl;
  }
   
}