The exercise is almost identical to a previous exercise with a minor change. It's the end of the semester and you got your marks from, Geometry, Algebra, Physics 
  classes. If the average score is 7 and above print "Good job!", if the average score is between 6 and 4 print "You need to work harder!", 
  if the average score is below 4 print "Failed, you really need to work harder!".

Create a program that:

Reads the values of these 3 lessons
Calculate the average of your grades
Example: Geometry = 6, Algebra = 7, Physics = 8
Output: Your average score is 7, Good job!"
Warning! Do not use the programming language magic. After you complete the exercise feel free to do so.

#include <iostream>
int main(){
int a,b,c,avg,sum;
std:: cout <<" enter the mark for phy = ";
std::cin >> a;

std:: cout <<" enter the mark for chem = ";
std::cin >> b;

std:: cout <<" enter the mark for maths = ";
std::cin >> c;

sum = a+b+c;

avg = sum/3;

std:: cout <<"average = "<< avg << std::ends;

if(avg>=7){
std:: cout <<" \ngood job ";
}
else if(avg>=4 and avg<=6)
{
std:: cout <<" \nwork harder ";
}
else{
std:: cout <<" \nfailed ";
}

return 0;
}
