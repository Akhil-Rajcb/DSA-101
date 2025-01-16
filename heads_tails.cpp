#include<iostream>
using namespace std;
int main(){
    int headCount=0,tailCount=0,n,tailPer=0,headPer=0;
    cout<<"enter the value(1,0,-1) = ";
    cin>>n;
    while(n!=-1){
        if(n==1){
            headCount++;
        
        }else if(n==0){
            tailCount++;
            
        }
        
        cin>>n;
    }
    cout<< "heads = "<<headCount<<" and tails = "<<tailCount<<ends;
    headPer=100*headCount/headCount+tailCount;
    cout<<"\nhead percent = "<<headPer<<ends;
    tailPer=100*tailCount/headCount+tailCount;
    cout<<"\ntail percent = "<<tailPer<<ends;
 
 return 0;
}