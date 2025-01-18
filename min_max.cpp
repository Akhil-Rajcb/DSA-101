write a program to find min,max value from an array of elements? 

#include<iostream>
#include<limits.h>
using namespace std;
int main(){
int min=INT_MAX,max=INT_MIN,i,n,a[100];

cout<<"enter the limit = ";
cin>>n;
cout<<"enter the numbers = ";
for(i=0;i<n;i++){
    cin>>a[i];
}

for(i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
}
for(i=0;i<n;i++){
    if(a[i]<min){
        min=a[i];
    }
}
cout<<"\nmin = "<<min<<ends;
cout<<"\nmax = "<<max<<ends;
return 0;
}
