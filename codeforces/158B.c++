#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,d=0;
    cin>>n;
    int a[n],b[5];
    for(i=0;i<5;i++)
    {
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    for(i=4;i>0;i--)
    {
        if(b[i]!=0)
        {
           if(i==4)
           {
               d=b[4];
               b[4]=0;
               //cout<<d<<" "<<i<<endl;
           }
           else if(i==3)
           {
               d=d+b[3];
               //b[3]=0;
               b[1]=b[1]-b[3];
               //cout<<d<<" "<<i<<endl;
           }
           else if(i==2)
           {
               int kk;
               kk=2*b[2];
               if(kk%4==0)
               {
                   d=d+(b[2]/2);
                   b[2]=0;
               }
               else {
                   int pp;
                   d=d+(kk/4);
                   pp=2;
                   d=d+1;
                   b[1]=b[1]-2;
                   
               }
               //cout<<d<<" "<<i<<endl;
           }
           else if(i==1 && b[1]>0)
           {
               int y,t;
               if(b[1]%4==0)
               {
                   d=d+(b[1]/4);
               }
               else {
                   d=d+(b[i]/4);
                   d=d+1;
               }
               //cout<<d<<" "<<i<<endl;
           }
        }
    }
    cout<<d;
}