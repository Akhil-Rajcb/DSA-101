It's the end of the semester and you got your grades from three classes: Geometry, Algebra, and Physics.

Create a program that:

Reads the grades of these 3 classes (Grades range from 0 - 10)
Calculate the average of your grades
Example: Geometry = 6, Algebra = 7, Physics = 8
Output: average_score = 7
Warning! Do not use the programming language MAGIC. After you complete the exercise feel free to do so.


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
