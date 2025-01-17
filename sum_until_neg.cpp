Create a program that reads numbers and sum them until the user inputs a negative value

Create a program that:

Reads numbers
Sum them
Prints the sum
Input example: 5, 9, 3, 0, 2, 0, 4, -7
Output: "The sum is 23"

#include <iostream>
using namespace std;
int main(){
    int sum=0,i=0;
    cout<<"enter the numbers = ";
    while(i>=0){
        sum=sum+i;
        cin>>i;
    }
    cout<<"sum = "<<sum<<ends;
return 0;    
}
