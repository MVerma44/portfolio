#include <bits/stdc++.h>
using namespace std;

int main() {
int t,dd,dt,dm,sd,st,sm,dadd,sadd;
cin>>t;

while(t--){
    cin>>dd>>dt>>dm;
    cin>>sd>>st>>sm;
    
 if(0<=dd<=100 && 0<=dt<=100 && 0<=dm<=100 && 0<=sd<=100 && 0<=st<=100 && 0<=sm<=100){
    dadd=dd+dt+dm;
    sadd=sd+st+sm;
    
    if(dadd>sadd){
        cout<<"Dragon";
    }
    else if(sadd>dadd){
        cout<<"Sloth";
    }

    
    else if(dadd==sadd && dd>sd ){
   cout<<"Dragon";
        
    }
        else if(dadd==sadd && sd>dd){
            cout<<"Sloth";
        }
        else if  (dd==sd && dd==sd && dt>st){
          
                cout<<"Dragon";
            }
            else if(dd==sd&& dd==sd && st>dt){
                cout<<"Sloth";
            }
            else{
               cout<<"Tie"; 
            }
        
 }
    
}
        
    


	return 0;
}
