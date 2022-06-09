#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	char  a[n][n];
	for(int i=0;i<n;i++)
	{for(int j=0;j<n;j++)
	{cin>>a[i][j];}}
		for(int i=0;i<n;i++)
	{for(int j=0;j<n;j++)
	{
		if(a[i][j]=='#'){
			if(a[i+1][j]=='#'&a[i][j+1]=='#'&a[i-1][j]=='#'&a[i][j-1]=='#'){
				
				a[i+1][j]='.';a[i][j+1]='.';a[i-1][j]='.';a[i][j-1]='.';
				a[i][j]='.';
			}
		}
		
	}}
	for(int i=0;i<n;i++)
	{for(int j=0;j<n;j++)
	{
		if(a[i][j]=='#'){cout<<"NO";
			return 0;;
		}}}
	cout<<"YES";
	
	// your code goes here
	return 0;
}