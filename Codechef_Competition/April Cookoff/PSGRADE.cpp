#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int a,b,c,amin,bmin,cmin,totmin,tot=0;
        cin>>amin>>bmin>>cmin>>totmin>>a>>b>>c;
        tot=a+b+c;
        if(a>=amin&&b>=bmin&&c>=cmin&&tot>=totmin){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}