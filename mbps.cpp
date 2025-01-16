#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<< "enter the x = ";
    cin>>x;
    cout<<"enter the y = ";
    cin>>y;
    
    float totalWiki=0.10*x;
    
    float totalMemes=0.05*y;
    
    float total= totalWiki+totalMemes;
    cout<<"total = "<<total<<ends;
    if(total>100){
        cout<<"too much consumption";
        
    }
    else if(totalMemes>totalWiki){
        cout<<"\n wow many memes "<<"\nsuch lol";
        
    }
    
 return 0;   
}