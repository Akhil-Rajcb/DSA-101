#include<iostream>
 using namespace std;
 
 int main(){
     int i,j,n;
     cout<<"enter the number of lines = ";
     cin>>n;
     
     for(i=0;i<n;i++){
         for(j=0;j<n;j++){
             if(i+j==n-1){
                cout<<"\t *";
             }
             else{
                 cout<<"\t  ";
             }
         }
         cout<<"\n \n";
     }
    return 0; 
 }