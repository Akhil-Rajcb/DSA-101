#include <iostream>
using namespace std;
int main() {
int num,rev=0,lastDigit;
cout<<"enter the numbber = ";
cin>>num;
while (num>=0){
    lastDigit=num%10;
    rev=rev*10+lastDigit;
    num=num/10;
    
    
}
cout<<"reverse = "<<rev<<ends;

    return 0;
}