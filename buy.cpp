You are interested in buying crypto-currencies. You want to check the current amount of money you have and see how many coins you can buy in Bitcoin, Ethereum, 
and Litecoin.

Create a program that:

Reads the total amount of money you have
Reads the price of Bitcoin, Ethereum, and Litecoin
Prints the amount of Bitcoin, Ethereum, and Litecoin you can buy
Example: money = 100, bitcoin_price = 50, ethereum_price = 25, litecoin_price = 10
Output: "With 100$ you can buy: 2 Bitcoins, 4 Ethereum, and 10 Litecoins"
(Warning! Τhe prices are made up for exercise purposes)

#include<iostream>

using namespace std;
 int main(){
    int total,bit,lite,eth,;
cout<< "enter the total money";
cin >>total;
cout<< "enter price of one bitcoin";
cin>>bit;
cout<< "enter price of one etherium ";
cin>>eth;
cout<< "enter price of on litecoin";
cin>>lite;
 
int bits=total/bit;
cout<<"number of btcoin you can buy = "<< bits << ends;

int  eths=total/eth;
cout<<"number of etherium you can buy = "<< eths << ends;

int  lites=total/lite;
cout<<"number of litecoin you can buy = "<< lites << ends;




return 0;



 }
