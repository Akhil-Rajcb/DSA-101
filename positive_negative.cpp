Create a program that reads 5 numbers and prints if the number is negative or positive

Create a program that:

Reads the 5 numbers you want
Print if a number is negative or positive
Input example: 4, 6, -11, -4, 9
Ouput: "Positive", "Positive", "Negative", "Negative", "Positive",

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
