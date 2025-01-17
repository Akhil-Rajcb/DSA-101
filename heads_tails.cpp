You start flipping a coin, count and print how many times the result was head or tails until you enter the word "stop".
Then find and print the percentage of how many head or tails was the result.

Create a program that:

Reads if the flipped coin was head or tails
If the value is "stop", print proper message and quit program
While value not "stop", count the result
Print the proper message
Calculates the percentage of head and tails
Prints the proper message
Input: "head", "tails", "tails", "tails", "head", "head", "tails", "tails", "tails", "head"
Ouput: "Head won 4 times and tails won 6 times"
Output: "40% Head, 60% Tails"

#include<iostream>
using namespace std;
int main(){
    int headCount=0,tailCount=0,n,tailPer=0,headPer=0;
    cout<<"enter the value(1,0,-1) = ";
    cin>>n;
    while(n!=-1){
        if(n==1){
            headCount++;
        
        }else if(n==0){
            tailCount++;
            
        }
        
        cin>>n;
    }
    cout<< "heads = "<<headCount<<" and tails = "<<tailCount<<ends;
    headPer=100*headCount/headCount+tailCount;
    cout<<"\nhead percent = "<<headPer<<ends;
    tailPer=100*tailCount/headCount+tailCount;
    cout<<"\ntail percent = "<<tailPer<<ends;
 
 return 0;
}
