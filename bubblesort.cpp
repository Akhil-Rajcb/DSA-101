#include<iostream>
 using namespace std;

 int main(){
    int i,j,a[100],temp,n;
     
     cout<<"enter the limit = ";
     cin>>n;

     cout<<"enter the values = ";
     for(i=0;i<n;i++){
        cin>>a[i];
     }
     
     for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
     }
     cout<<"sorted array = ";

     for(i=0;i<n;i++){
        cout<<"\t"<<a[i];
     }
return 0;
 }