
#include<iostream>
using namespace std;
int main(){
	int t,n,res;
	cin>>t;
	while(t--){
		cin>>n;
        int m=n;

      while(m)   //travesing the no of digits
	  {
       res=m%100;
        if(res==21){
			cout<<"The streak is broken!"<<endl;
			break;
		}
       m=m/10;
	    }

        if(res==21){
         continue;
		}
		if(n%21==0){
			cout<<"The streak is broken!"<<endl;
			continue;
		}
		cout<<"The streak lives still in our heart!"<<endl;
	}
	return 0;
}