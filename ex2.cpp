#include <iostream>
int main()
{
double a;
double b;
double c;
 int input;

 //std::cin >> a >> b;

 //c = a*b;

 //std::cout << c;

 std::cout << "Enter value for a: ";
 std::cin >> a;
 std::cout << "Enter value for b: ";
 std::cin >>b;
 std::cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication or 4 for division: ";
 std::cin >> input;
 if(input == 1){
   c = a+b; 
}
 if(input == 2){
   c = a-b;
 }
 if(input == 3){
   c = a*b;
 }
 if(input == 4){
   c = a/b;
 }
 if(!std::cin){
   std::cout << "Invalid input!";
}

 std::cout << "Value of c is: " << c;

return 0;
}
