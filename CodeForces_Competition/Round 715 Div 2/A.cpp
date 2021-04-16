#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n=0;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       if(arr[0]%2==0){
           cout<<arr[0]<<" ";
          for(int j=1;j<n;j++){
            if(arr[j]%2==0){
                cout<<arr[j]<<" ";
            }
          }
        for(int j=0;j<n;j++){
            if(arr[j]%2!=0){
                cout<<arr[j]<<" ";
            }
        }
       
       cout<<endl;
    }
    else{
        cout<<arr[0]<<" ";
          for(int j=1;j<n;j++){
            if(arr[j]%2!=0){
                cout<<arr[j]<<" ";
            }
          }
        for(int j=0;j<n;j++){
            if(arr[j]%2==0){
                cout<<arr[j]<<" ";
            }
        }
       
       cout<<endl;
    }
    
}
return 0;
}