#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    float arr[n][3];
    float marr[n][2];
    float mval[n];
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    for(int i=0;i<n;i++){
        float m=0;
        m=arr[i][i]/(arr[i][0]*arr[i][2]);
        marr[i][0]=m;
        marr[i][1]=i+1;
        mval[i]=m;
    }
     sort(mval, mval + n);
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             if(mval[n-i-1]==marr[j][0]){
                 cout<<marr[j][1]<<" ";
             }
         }
     }
     cout<<endl;
    return 0;
}