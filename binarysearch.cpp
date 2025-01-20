#include<iostream>
using namespace std;
int main() {
int i,target,n,a[100],low,high,mid=0,count=0;

cout<<"enter the limit = ";
cin>>n;

cout<<"enter the numbers = ";
for(i=0;i<n;i++){                                                     
    cin>>a[i];                                           
   }
cout<<"enter the target = ";
cin>>target;
low=0;                                          
high=n-1;                                                                 

while(low<=high){
       mid=(low+high)/2;
     if(a[mid]==target){
        cout<<target<< " found at "<<mid<<ends;
        count++;
        return 0; 
     }else if(target>a[mid]){
        low=mid+1;
     }else if(target<a[mid]){
        high=mid-1;
     }
         
          
}
if(count==0){
cout<<"element not found";
}
return 0;
}
