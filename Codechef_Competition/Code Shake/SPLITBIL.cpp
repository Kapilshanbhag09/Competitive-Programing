#include<iostream>
using namespace std;
int main(){
    int n=0,m=0,d=0,rembil=0;
    cin>>n>>m>>d;
    int orarr[n];
    for(int i=0;i<n;i++){
        cin>>orarr[i];
    }
    for(int i=0;i<n;i++){
        if(i!=m && i!=d){
            rembil+=orarr[i];
        }
    }
    cout<<orarr[m]+(rembil/2)<<" "<<orarr[d]+(rembil/2)<<endl;
    return 0;
}