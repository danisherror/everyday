#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long i,n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        queue<int> q;
        int ans=INT_MAX;
        for(i=0;i<n;i++)
        {
            if(i>=k-1)
            {
                if(s[i]=='W')
                {
                    q.push(i);
                }
                while(q.size()>0)
                {
                    if(q.front()<i-(k-1))
                    {
                        q.pop();
                        
                    }
                    else {
                    break;
                    }
                }
                        int temp;
                        temp=q.size();
                        ans=min(ans,temp);
            }
            else {
                if(s[i]=='W')
                {
                    q.push(i);
                }
            }
        }
        cout<<ans<<"\n";
    }
}