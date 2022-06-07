#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,p;
    cin>>q;
    q=q+1;
    p=q;
    while(q--)
    {
        int n,i;
        string s;
        getline(cin,s);
        n=s.length();
        bool fl=false;
        bool flag=false;
        //cout<<n<<endl;
        if((p-1)!=q)
        {
        if(n<4)
        {
            fl=false;
            flag=false;
        }
        else {
        if(s[n-2]=='a' && s[n-3]=='l' && s[n-4]=='a' && s[n-5]=='l' && s[n-1]=='.')
        {
                flag=true;
        }
        if(s[3]=='o' && s[2]=='a' && s[1]=='i' && s[0]=='m' && s[4]=='.')
        {
            //cout<<"--\n";
            fl=true;
        }
        }
        if(fl==false && flag==false)
        {
            cout<<"OMG>.< I don't know!\n";
        }
        else if(fl==true && flag==true)
        {
            cout<<"OMG>.< I don't know!\n";
        }
        else {
            if(fl==true && flag==false)
            {
                cout<<"Rainbow's\n";
            }
            if(flag==true && fl==false) 
            {
            cout<<"Freda's\n";
            }
        }
        }
    }
}