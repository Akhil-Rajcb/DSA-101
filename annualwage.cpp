#include <iostream>
using namespace std;

int main(){

int minimumWage= 400;
int exp,children;
bool didHetookleave;
int annualWage;
cout<< "enter the experience = ";
cin>> exp;
cout<< "enter the number of children = ";
cin>> children;

cout<< "did he took leaves = ";
cin>>didHetookleave;

if(didHetookleave=true){
 annualWage= 400+20*exp+30*children+100;
}else{
 annualWage= 400+20*exp+30*children;
  
}
cout<< "the annual wage = " <<annualWage<< ends;

return 0;
}