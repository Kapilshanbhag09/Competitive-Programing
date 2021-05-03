#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,x=0,max=0,tn=0,lf=0;
        cin>>n>>x;
        tn=n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(tn==x){
                break;
            }
            if(i==0){
                max++;
                tn--;
                lf=arr[i];
            }
            else{
                if(arr[i]!=lf){
                    max++;
                    tn--;
                    lf=arr[i];
                    
                }
            }
        }
        cout<<max<<endl;

    }
    return 0;
}