#include<iostream>
using namespace std;

int main(){
int i,j,n,a[100],sum,count=0;

cout<<"enter the limit = ";
cin>>n;

cout<<"enter the numbers = ";
for(i=0;i<n;i++){
    cin>>a[i];
}
cout<<"enter the sum = ";
cin>>sum;

for(i=0;i<n;i++){
   for(j=i+1;j<n;j++){
    if(a[i]+a[j]==sum){
        cout<<"\nthe two elements are "<<a[i]<<" and "<<a[j]<<ends;
        count++;
    }
   }
}
if(count==0){
    cout<<"no such element";
}
return 0;
}