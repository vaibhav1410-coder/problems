#include <iostream>
using namespace std;
long long int gcd(long long int,long long int);
long long int gcd(long long int a,long long b)
{
    if(a==0)
    return b;
    return gcd((b%a),a);
    
}
int main() {
	// your code goes here
	int t,n;
	cin>>t;
	
	long long int a[1001],r;
	while(t--){
	    r=0;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	    r=gcd(r,a[i]);
	    }
	    cout<<r<<endl;
	}
	
	return 0;
}
