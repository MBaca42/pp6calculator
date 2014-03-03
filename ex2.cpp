#include <iostream>
#include <climits>

double addition(double a, double b){
  return a+b;
}
double subtraction(double a, double b){
  return a-b;
}
double multiply(double a, double b){
  return a*b;
}
double division(double a, double b){
  return a/b;
}
double print(double c){
  std::cout << "Value of c is: " << c << '\n';
  return 0;
}

int main()
{
  double a;
  double b;
  double c;
  int input;

  int i = 1;
  while(i < 10){
    std::cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division or 5 to quit: ";
    std::cin >> input;

    if(!std::cin || input >= 6 || input <= 0){
      std::cout << "Invalid input!";
      std::cin.clear();
      std::cin.ignore(INT_MAX, '\n');
      continue;
    }
    if(input == 5){
      break;
    }

    std::cout << "Enter value for a: ";
    std::cin >> a;
    std::cout << "Enter value for b: ";
    std::cin >>b;

    if(input == 1) print( addition(a,b) );
    if(input == 2) print( subtraction(a,b) );
    if(input == 3) print( multiply(a,b) );
    if(input == 4) print( division(a,b) );

  }
  return 0;
}
