#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,m=0,k=0,w=0,luckyn=0,sq=0;
        cin>>n>>m>>k>>w;
        int mat[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>mat[i][j];
            }
        }
        sq=n;
        for(int i=0;i<sq;i++){
            int sum=0;
            for(int j=0;j<=i;j++){
                for (int k = 0; k<=i; k++)
                {
                    sum=sum+mat[j][k];
                }
                
            }
            if(sum%2==0){
                luckyn+=1;
            }
        }
        if(luckyn>=w){
            cout<<"Ee Sala Cup Namde"<<endl;
        }
        else{
            cout<<"Mundin Sala Cup Namde"<<endl;
        }
    }
    return 0;
}