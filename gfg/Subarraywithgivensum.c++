// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        long long ss=0,p=0,i,ll=0;
        for(i=0;i<n;i++)
        {
            ss=ss+arr[i];
            ll=ll+arr[i];
            if(ss>s)
            {
                while(p<i)
                {
                    if(ss<=s)
                    {
                        break;
                    }
                    ss=ss-arr[p];
                    p++;
                }
            }
            if(ss==s)
            {
                break;
            }
        }
        if(ss==s)
        {
        vector<int> aa;
        aa.push_back(p+1);
        aa.push_back(i+1);
        return aa;
        }
        else
        {
            vector<int> aaa;
            aaa.push_back(-1);
            return aaa;
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
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends