//A guy with a mental problem 
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {
        // Your code goes here 
        long long minsum,sum=0;
        for(int i=0;i<n;i++){
            if(i%2==0)  //starts with train A
            sum=sum+a[i];
            else
            sum=sum+b[i];
        }
        minsum=sum;
        sum=0;
        for(int i=0;i<n;i++){
            if(i%2==0) //starts with train B
            sum=sum+b[i];
            else
            sum=sum+a[i];
        }
        if(sum<minsum)
        minsum=sum;
        return minsum;
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for(long long i=0;i<n;i++)
            cin >> a[i];
        for(long long i=0;i<n;i++)
            cin >> b[i];
        Solution ob;
        cout << ob.minTime(a, b, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends