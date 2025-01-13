The exercise is almost identical to a previous exercise with a minor change. In a company the monthly salary of an employee is calculated by minimum wage 400$
per month, plus 20$ multiply by the employment years, plus 30$ for each employee kid, plus 100$ if the employee didn't miss 1 day of work.

Create a program that:

Reads the employment years
Reads the number of each employee kids
Prints the total amount the employee must take
Output: "The total amount is 660$, 400$ minimum wage + 100$ for 5 years experience + 60$ for 2 kids + 100$ for not missing a day at work"


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
