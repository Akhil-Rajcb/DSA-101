#include<iostream>
using namespace std;

int main(){
int i,n,a[100],target,count=0;

cout<<"enter the limit = ";
cin>>n;

cout<<"enter the numbers = ";
for(i=0;i<n;i++){
    cin>>a[i];
}
cout<<"enter the target = ";
cin>>target;

for(i=0;i<n;i++){
    if(a[i]==target){
        cout<<"element "<<a[i]<<" found at postion = "<<i+1<<ends;
        count++;
    }
}
if(count==0){
    cout<<"element not found";
}
return 0;
}