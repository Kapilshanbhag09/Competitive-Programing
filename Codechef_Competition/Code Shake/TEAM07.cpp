#include<iostream>
using namespace std;
int lcm(int a,int b){
   int max = (a > b) ? a : b;
   while (1) {
        if (max % a == 0 && max % b == 0) {
           break;
        }
        ++max;
    }
    return max; 
    
}
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int x=0,a=0,b=0;
        cin>>x>>a>>b;
        cout<<x+lcm(a,b)<<endl;
    }
    return 0;
}
