#include<iostream>
using namespace std;
int main(){
    int a,b,c,t;
    cin>>a>>b>>c;
    if(c==0) 
        if(a!=b) 
            cout<<"NO";
    else 
        cout<<"YES";
    else if((b-a)%c==0&&(b-a)/c>=0) 
        cout<<"YES";
    else 
        cout<<"NO";
}