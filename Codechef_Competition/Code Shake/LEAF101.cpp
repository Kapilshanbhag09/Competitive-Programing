#include<iostream>
#include<string>
using namespace std;
int main(){
    int n=0,k=0;
    cin>>n>>k;
    string s,ns;
    cin>>s;
    for(int i=0;i<n-k;i++){
        cout<<s[i]<<" ";
         int flag=1;
        for(int j=i;j<i+k;j++){
            if(s[j]!=s[i]){
                cout<<" not "<<s[j];
                flag=0;
            }
        }
        if(flag==1){
            cout<<"Bad Luck found in "<<i<<endl;

        }
        else{
            ns=ns+s[i];
        }
        cout<<endl;
        cout<<ns;
    }
    return 0;
}