You've consumed X amount of Mbps on Wikipedia and Y amount of Mbps on memes. The cost of visiting Wikipedia is 0,10$ per 
Mb and the cost for watching memes is 0,05$ per Mb. If total consumption is more than 100$ print "Too much consumption". 
If watching meme consumption is greater than reading wikipedia consumption print "WOW MANY MEMES", "SUCH LOL"(in new line).

Create a program that:

Reads X(wikipedia Mb consupmtion) and Y(watching meme Mb consumption)
Calculates the total consumption
If total consumption greater than 100$ print proper message
If watching meme consumption is greater than reading wikipedia articles print proper messages
Warning! For the greater meme consumption you will use one print statement and the output must be in seperate lines


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
