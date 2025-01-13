You have started working and you are wondering how many things you can buy with the money you've earned. A PS4 costs 200$, 
a Samsung phone 900$, a TV 500$, a game skin 9.99$

Create a program:

Notice that you can't but half TV or 1/4 of PS4.
Reads how many hours you've worked
Reads your hourly income
Prints how many items you can buy
Output: "I can buy 4 PS4, 1 Samsung, 3 TV, 80 game skin"
#include <iostream>
using namespace std;
int main() {
int noOfhrs,hrlyIncome;
 cout<<"\nnumber of hours worked = ";
 cin>>noOfhrs;
 
 cout<<"\nhourly minimum income = ";
 cin>>hrlyIncome;
 int totalIncome=noOfhrs*hrlyIncome;
 cout<<"\ntotal income = "<<totalIncome<<ends;
 
 int noOfps4,noOftv,noOfphone,noOfgameskin;
 
 noOfps4=totalIncome/200;
 
 noOftv=totalIncome/500;
 
 noOfphone=totalIncome/900;
 
 noOfgameskin=totalIncome/9.99;
 
 cout<<"\nno of PS4 = "<<noOfps4<<ends;
  cout<<"\nno of TV = "<<noOftv<<ends;
   cout<<"\nno of Phones = "<<noOfphone<<ends;
    cout<<"\nno of game skin = "<<noOfgameskin<<ends;

    return 0;
}