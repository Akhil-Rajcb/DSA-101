#include<iostream>
using namespace std;
int main(){
 int n[20],i;

 for(i=0;i<5;i++){
    
    cout<<"enter the numbers = ";
    cin>>n[i];  
  
 }
 
 for(i=0;i<5;i++){
     if(n[i]>0){
        cout<<"\npositive";
     }
     else if(n[i]<0){
        cout<<"\nnegative";
     }
 }
 return 0;
}
