#include<iostream>
#include<vector>
 using namespace std;

 int main(){
    int i,j,temp,n,tempp;
    vector <int> a;
    
     
     cout<<"enter the limit = ";
     cin>>n;

     cout<<"enter the values = ";
     for(i=0;i<n;i++){
        int value;
        cin>>value;
        a.push_back(value);
     }
     
     for(i=0;i<a.size();i++){
        for(j=0;j<a.size()-i-1;j++){
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
   
        i=0;
    
     while(i<n-1){
        tempp=a[i];
        a[i]=a[i+1];
        a[i+1]=tempp;
        i=i+2;
     } 
        cout<<"wave array = \n";
      for(i=0;i<n;i++){
        cout<<"\t"<<a[i];
     }


return 0;
 }