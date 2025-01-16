
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