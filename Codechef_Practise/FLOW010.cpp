#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while (t--)
    {
        string t;
        cin>>t;
        if(t[0]=='B' || t[0]=='b'){
            cout<<"BattleShip"<<endl;
        }
        else if(t[0]=='C'|| t[0]=='c'){
            cout<<"Cruiser"<<endl;
        }
        else if(t[0]=='F'||t[0]=='f'){
            cout<<"Frigate"<<endl;
        }
        else{
            cout<<"Destroyer"<<endl;
        }
    }
    return 0;
    
}