#include <iostream>
int main(){
int a,b,c,avg,sum;
std:: cout <<" enter the mark for phy";
std::cin >> a;

std:: cout <<" enter the mark for chem";
std::cin >> b;

std:: cout <<" enter the mark for maths";
std::cin >> c;

sum = a+b+c;

avg = sum/3;

std:: cout <<"average ="<< avg << std::ends;

return 0;
}