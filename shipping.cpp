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