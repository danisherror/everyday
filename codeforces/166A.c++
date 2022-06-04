/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k;
    vector<int> v;
    cin>>n>>k;
    vector<int> adj[51];
    int a[51]={0};
    int x,y;
    while(n--)
    {
        cin>>x>>y;
        if(a[x]==0)
        {
           v.push_back(x);
           a[x]++; 
        }
        adj[x].push_back(y);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<51;i++)
    {
        if(adj[i].size()>0)
        {
            sort(adj[i].begin(),adj[i].end());
        }
    }
     vector<pair<int,int>> res;
           for(int i=0;i<v.size();i++){
               for(int j=0;j<adj[v[i]].size();j++){
                   res.push_back({v[i],adj[v[i]][j]});
               }
           }
           int y1,u;
           y1=res[k-1].first;
           u=res[k-1].second;
           //cout<<y1<<" "<<u<<endl;
           int dd=0;
           for(int i=0;i<res.size();i++)
           {
               //cout<<y1<<" "<<u<<endl;
               if(res[i].first==y1 && res[i].second==u)
               {
                   dd++;
               }
           }
           cout<<dd;
}
*/
// or
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,k;
     cin>>n>>k;
     vector<int> adj[51];
     int x,y;
     vector<int> v; int b[51]={0};
      while(n--){
          cin>>x>>y;
          if(b[x]==0){
          v.push_back(x);
          b[x]++;
          }
          adj[x].push_back(y);
      }
      sort(v.begin(),v.end(),greater<int>());
      for(int i=0;i<51;i++){
          if(adj[i].size()>0)
          sort(adj[i].begin(),adj[i].end());
      }
     /* for(int i=0;i<v.size();i++){
          cout<<v[i]<<" ";
      }
      cout<<"\n";
       
      for(int i=0;i<v.size();i++){
          cout<<v[i]<<"-->> "<<" ";
          for(int j=0;j<adj[v[i]].size();j++){
              cout<<adj[v[i]][j]<<" ";
          } cout<<"\n";
      }
      cout<<"\n";
     */
      int sum=0; int ct=0; int f=0;
      int len=v.size();
      for(int i=0;i<len;i++){
          
           //cout<<k<<"\n";
          // cout<<sum+adj[v[i]].size()<<"\n";
          if(sum+adj[v[i]].size()>=k){
             k=k-sum;
              for(int j=0;j<adj[v[i]].size();j++){
                  
                  
                 
                if(j==k-1){
                   
                    for(int z=0;z<adj[v[i]].size();z++){
                        if(adj[v[i]][z]==adj[v[i]][j]){
                            ct++;
                           
                        }
                    }
                    f=1;
                    break;
                }
                if(f==1){
                    
                    break;
                }  
              }
              if(f==1){
                  break;
              }
              sum=sum+adj[v[i]].size();
          } else {
              if(f==1){
                  break;
              }
            
              sum=sum+adj[v[i]].size();
          }
      }
     cout<<ct<<"\n";
}