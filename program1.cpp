#include <bits/stdc++.h>
using namespace std;
int arr[10000000];
int main() {
	#ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
	 freopen("output.txt","w",stdout);
    #endif
	
	int t,n,d;
	cin>>t;
	while(t--){
	    cin >> n >> d;
	    for(int i=0;i<n;i++){
			cin >> arr[i];
		}
	   reverse(arr,arr+d);
	   reverse(arr+d,arr+n);
	   reverse(arr,arr+n);
	   for(int i=0;i<n;i++){
	   cout << arr[i] << " ";
	   }
	   cout << endl;
	    
	}
	
	
	return 0;
}