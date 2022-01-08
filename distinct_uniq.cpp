#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a[1001],t,n,m,distinct,uniq,repeat,count;
    bool flag=false;
    cin>>t;
    while(t--){
        cin>>n>>m;
        repeat=0;
        count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            a[i]=a[i]%m;
        }
        distinct=n;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
            if(a[i]==a[j] && j!=i)    //no of times a number a[i] repeated further.
            {
                repeat++;
                flag=true; //a number a[i] is getting repeated.
            }
            }
                if(flag==true)
                    count++; //count of numbers that are getting repeated.
                flag=false;
         
        }
        uniq=n-(repeat+count);
        distinct=n-repeat;
        cout<<distinct<<endl;
        cout<<uniq<<endl;
         
    }
    
    return 0;
}
