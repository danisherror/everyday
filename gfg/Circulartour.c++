// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


 // } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
        int i,p1=0,d=0,ll=0;
        bool flag=false;
        for(i=0;i<n;i++)
        {
            ll=ll+p[i].petrol-p[i].distance;
            p1=p1+p[i].petrol-p[i].distance;
            //cout<<p[i].distance<<" "<<p[i].petrol<<endl;
            
            if(!flag)
            {
                d=i;
                flag=true;
            }
            if(p1<0)
            {
                flag=false;
                p1=0;
            }
            //cout<<p1<<" "<<flag<<" "<<ll<<" "<<d<<endl;;
        }
        if(!flag || ll<0)
        {
            return -1;
        }
        else
        {
            return d;
        }
    }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
  // } Driver Code Ends