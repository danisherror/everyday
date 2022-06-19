// { Driver Code Starts
// Initial Template for C

#include <stdio.h>

struct pair {
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n) ;

int main() {
    long long int t, n, a[100002], i;
    struct pair minmax;

    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);

        for (i = 0; i < n; i++) scanf("%lld", &a[i]);
        minmax = getMinMax(a, n);
        printf("%lld %lld\n", minmax.min, minmax.max);
    }
    return 0;
}// } Driver Code Ends


// User function Template for C

struct pair getMinMax(long long int a[], long long int n) {
   struct pair minmax;
   long long m,x;
   m=a[0],x=a[0];
   for(int i=0;i<n;i++)
   {
       if(a[i]>=x)
       {
           x=a[i];
       }
       if(a[i]<=m)
       {
           m=a[i];
       }
   }
   minmax.min=m;
   minmax.max=x;
   return minmax;
}