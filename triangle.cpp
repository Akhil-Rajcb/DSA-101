#include<iostream>
using namespace std;
int main(){

    int i,j,n;
    

    cout<<"enter the no of lines = ";
    cin>>n;

    for(i=0;i<n;i++) {
        if(i%2==0) {
            int noOfStars = i+1; 
            int noOfSpace = n-noOfStars;
            int noOfHalfSpace = noOfSpace/2;

            for(j=0;j<noOfHalfSpace+1;j++) {
                cout<<"\t";
            }
            for(j=0;j<noOfStars;j++) {
                cout<<"\t *";
            }
            for(j=0;j<noOfHalfSpace+1;j++) {
                cout<<"\t";
            }
            
            
        }else{
            for(j=0;j<n;j++){
                cout<<"\t";
            }
        }
        cout<<"\n";

    }
    
    return 0;
}