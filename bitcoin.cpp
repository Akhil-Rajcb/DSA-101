You've bought a Bitcoin and now it's on the rise!!!

Create a program that:

Reads the value of the bitcoin at the time of purchase
Reads the percentage of increase (or decrease)
Prints the total value of your bitcoin
Prints the increase or decrease value
Example: bitcoin_value = 10000, bitcoin_increase = 10
Output: total_bitcoin_value = 11000, bitcoin_increase_value = 1000

#include<iostream>
using namespace std;

int main(){
    
int initValue = 10000;
int risePerc = 20;
int increaseValue = initValue*risePerc/100;
int totalValue = initValue + increaseValue; 
int percIncrease = totalValue-initValue;
int ppercIncrease = 100*percIncrease/initValue;
cout << increaseValue << ends;
cout << "\n" << totalValue << ends;
cout << "\n" << ppercIncrease << ends;


return 0;


}
