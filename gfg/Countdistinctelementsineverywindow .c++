// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        map<int,int> m;
        vector<int> v;
        int i,d=0;
        for(i=0;i<n;i++)
        {
            if(i<k)
            {
                
                m[A[i]]++;
                if(m[A[i]]==1)
                {
                    d++;
                }
            }
            else
            {
                v.push_back(d);
                m[A[i-k]]--;
                m[A[i]]++;
                //cout<<d<<" "<<m[A[i-k]]<<" "<<m[A[i]]<<" "<<i<<endl;
                if(m[A[i-k]]==0)
                {
                    d--;
                }
                if(m[A[i]]==1 && A[i]!=A[i-k])
                {
                    d++;
                }
                
            }
            if(i==n-1)
            {
                v.push_back(d);
            }
        }
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends