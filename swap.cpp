Create two variables a and b, and initially set them each to a different number. Write a program that swaps both values.

Example: a = 10, b = 20
Output: a = 20, b = 10
Warning! Do not use the programming language MAGIC. After you complete the exercise feel free to do so.
#include <iostream>
 int main(){
 int a=10,b=20,temp=0;
 temp=a;
 a=b;
 b=temp;
 
 std:: cout << "a=" << a << ",y=" << b << std::ends;
 return 0;
   
 }
