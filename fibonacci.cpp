write a program to get the fibonacci series?


#include <iostream>
using namespace std;
int main() {
int a=0,b=1,sum,n,i;
  cout<<"enter the limnit = ";
  cin>>n;
  cout<<a<<ends;
  cout<<"\n"<<b<<ends;
  for(i=0;i<n;i++){
      sum=a+b;
      cout<<"\n"<<sum<<ends;
      a=b;
      b=sum;
  }
  
    return 0;
}
