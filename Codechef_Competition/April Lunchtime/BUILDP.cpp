#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,r=0,sum=0;
        cin>>n>>r;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

    
    if(n==1){
        cout<<b[0]<<endl;
    }
    else{
        for(int i=1;i<n;i++){
            sum=sum+b[i-1]-((a[i]-a[i-1])*r);
        }
     
        cout<<sum + b[n-1]<<endl;
    }
    }
    return 0;
}