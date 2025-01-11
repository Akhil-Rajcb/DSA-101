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