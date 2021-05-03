#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int m=0,n=0,ans=0;
        cin>>m>>n;
        ans=m+(n/2);
        cout<<ans<<endl;
    }
    return 0;
}