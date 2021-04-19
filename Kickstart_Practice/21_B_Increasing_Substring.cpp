#include<iostream>
#include<string>
using namespace std;
void sol(string s,int sp,int ep){
    if(sp==s.length()){
        return;
    }
    if(int(s[ep])<int(s[ep+1])){
        cout<<ep-sp+1<<" ";
        sol(s,sp,ep+1);
    }
    else{
        cout<<ep-sp+1<<" ";
        sol(s,ep+1,ep+1);
    }
}
int main(){
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int n=0;
        string s;
        cin>>n;
        cin>>s;
        cout<<"Case #"<<i+1<<": ";
        sol(s,0,0);
        cout<<endl;
        
    }
    return 0;
}