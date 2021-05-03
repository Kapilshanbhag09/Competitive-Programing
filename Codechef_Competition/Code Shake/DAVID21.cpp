#include<iostream>
#include<string>
using namespace std;
int main(){
    int n=0,flag=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n/2;i++){
        if(s[i]==s[n-i-1]){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"true\nIt is a palindrome"<<endl;
    }
    else{
        cout<<"false\nIt is not palindrome"<<endl;
    }
    return 0;
}