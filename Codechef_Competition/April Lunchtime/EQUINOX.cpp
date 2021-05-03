#include<iostream>
#include<string>
using namespace std;
int main(){
    int t=0;
    string eq="EQUINOX";
    cin>>t;
    while(t--){
        int n=0,a=0,b=0,ap=0,bp=0;
        cin>>n>>a>>b;
        while(n--){
            int flag=0;
            string s;
            cin>>s;
            for(int i=0;i<eq.length();i++){
                if(s[0]==eq[i]){
                    ap+=a;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                bp+=b;
            }


        }
        if(ap>bp){
            cout<<"SARTHAK"<<endl;
        }
        else if(ap==bp){
            cout<<"DRAW"<<endl;
        }
        else{
            cout<<"ANURADHA"<<endl;
        }
    }
    return 0;
}