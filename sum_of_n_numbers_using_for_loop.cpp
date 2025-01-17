Create a program that reads a number that you want to get the sum until that number and then calculate the averge of these numbers

Create a program that:

Reads the number you want to sum
Calculates the sum of 1+2+3+4...+98+99+n
Calculates the average of the sum 1+2+3+4...+98+99+n
Input example: 100
Output: "The average is 50.5"
    
#include<iostream>
using namespace std;

int main(){
int i,n,sum=0;

cout<<"enter the number";
cin>>n;

for(i=0;i<=n;i++){
    sum=sum+i;
}
cout<<"total"<<sum<<ends;
return 0;
}
