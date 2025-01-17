A cell phone company has the following billing policy

Fixed cost 25$
Call duration(in seconds)	Charge($/per second)
1-500	0,01
501-800	0,008
801+	0,005
Create a program that:

Reads how many seconds was the calls duration
Calculates the monthly bill for the subscriber
Prints the total amount
Output: "total amount: 48$"
Notice that that the charge for the first 500 seconds it's 0,01$ then for the next 501 to 800 seconds it's 0,008 and then it's 0,005$


#include <iostream>
using namespace std;
int main() {
    int callDuration,total;
    
    cout<< "enter the call duration = ";
    cin>>callDuration;
    
    if(callDuration<=500){
        total=callDuration*0.01;
        
    }
    else if(callDuration<=800){
        total=(800-callDuration)*0.008+500*0.01;
    }
    else{
        total=500*0.01+299*0.008+(callDuration-800)*0.005;
    }
    
total=total+25;
cout<<"total amount = "<<total<<ends;
    return 0;
}
