You want to buy something from Amazon. The seller charges different prices for shipping cost based on location. For US it's 5$ for Europe 
it's 7$ for Canada it's 3$ for other places it's 9$

Create a program that:

Reads the cost of the product
Reads your location
Print the amount of money you have to pay
Ouput: "You have to pay 23$, 20$ for the product and 3$ for shipping cost"


#include<iostream>
using namespace std;
int main(){
int propri,total,location;
cout<<"enter the product price = ";
cin>>propri;
cout<<"enter the location(us=1,canada=2,europe=3,other=4) = ";
cin>>location;
if(location==1){
total=5+propri;
}else if(location==2){
    total=propri+7;
}else if(location==3){
    total=propri+3;
}else if(location==4){
    total=propri+9;
}
cout<<"total price ="<<total<<ends;

return 0;
}
