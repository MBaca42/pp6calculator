#include <iostream>
#include <climits>
#include <cmath>

double addition(double a, double b){ //Adds a and b
  return a+b;
}
double subtraction(double a, double b){ //Subtracts b from a
  return a-b;
}
double multiply(double a, double b){ //Multiplies a by b
  return a*b;
}
double division(double a, double b){ //Divides a by b
  return a/b;
}
double xintercept(double a, double b){ //Works out the x-intercept for a given gradient and y-intercept
  return -1*division(b,a);
}
double quadratic1(double a, double b, double c){
  return (-b + sqrt((b * b) - (4*a*c)))/(2*a);
}
double quadratic2(double a, double b, double c){
  return (-b - sqrt((b * b) - (4*a*c)))/(2*a);
}
double threevector(double a, double b, double c){
  return sqrt((a*a) + (b*b) + (c*c));
}
double fourvector(double a, double b, double c, double d){
  return sqrt((a*a) + (b*b) + (c*c) + (d*d));
}
double print(double c){ //Prints out the answer to one of the above functions
  std::cout << "The answer is: " << c << '\n';
  return 0;
}
double errortest(){
	if(!std::cin){
	  std::cout << "Invalid number." << '\n';
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	//else break;
}

int main()
{
  double a;
  double b;
  double c;
  double d;
  double e;
  int input;

  int i = 1;
  while(i < 10){
    std::cout << "Please enter the number for your selection:" << '\n' << "1 - Addition" << '\n' <<  "2 - Subtraction" << '\n' << "3 - Multiplication" << '\n' << "4 - Division" << '\n' << "5 - x-intercept calculation" << '\n' << "6 - Quadratic calculation" << '\n' << "7 - Vector lengths" << '\n' << "8 - Invariant mass of two particles" << '\n' << "9 - Quit" << '\n';
    std::cin >> input; //User selections which function to use (or to quit)

    if(!std::cin || input >= 10 || input <= 0){ //Returns error if out of range/doesn't make sense
      std::cout << "Invalid input!" << '\n';
      std::cin.clear();
      std::cin.ignore(INT_MAX, '\n');
      continue;
    }
    if(input == 9){ //Quit option
      break;
    }
  

    if(input >= 1 && input <= 4){
      while( 1==1){
	std::cout << "Enter value for a: "; //User defined values for a and b
	std::cin >> a;
	if(!std::cin){
	  std::cout << "Invalid number." << '\n';
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
      }
      while( 1==1){
	std::cout << "Enter value for b: ";
	std::cin >>b;
	if(!std::cin){
	  std::cout << "Invalid number." << '\n';
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
      }
    }
  

    if(input == 1) print( addition(a,b) ); //Calls the above functions based on user input choice
    if(input == 2) print( subtraction(a,b) );
    if(input == 3) print( multiply(a,b) );
    if(input == 4) print( division(a,b) );
    if(input == 5){
      while(1==1){
      std::cout << "For a straight line modelled by y = mx+c, please enter m (the gradient): ";
      std::cin >> a;
        if(!std::cin){
	  std::cout << "Invalid number!" << '\n';
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
        }
	else break;
      }
      while(1==1){
      std::cout << "Now enter c (y-intercept): ";
      std::cin >> b;
        if(!std::cin){
	  std::cout << "Invalid number!" << '\n';
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
        }
	else break;
      }

      print( xintercept(a,b) );
    }

    if(input == 6){
      while(1==1){
      std::cout << "For a quadratic modelled by y= ax^2 + bx + c, please enter a: ";
      std::cin >> a;
        if(!std::cin){
	  std::cout << "Invalid number!" << '\n';
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
        }
	else break;
      }
      while(1==1){
      std::cout << "And b: ";
      std::cin >> b;
        if(!std::cin){
	  std::cout << "Invalid number!" << '\n';
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
        }
	else break;
      }
      while(1==1){
      std::cout << "And finally, c: ";
      std::cin >> c;
        if(!std::cin){
	  std::cout << "Invalid number!" << '\n';
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
        }
	else break;
      }
      print( quadratic1(a,b,c) );
      std::cout << "And" << '\n';
      print( quadratic2(a,b,c) );
      d = quadratic1(a,b,c);
      if(d != d){
	std::cout << "Your values lead to an imaginary answer (4*a*c was greater than b^2)!" << '\n';
      }
    }

    if(input == 7){
      std::cout << "Are you using a 3 vector or a 4 vector? (Enter 3 or 4 respectively): ";
      while(1 == 1){
	std::cin >> e;
	if(!std::cin || e <=2 || e >= 5){
	  std::cout << "Invalid vector size! Please re-enter: ";
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
      }
      if(e == 3){
	while(1==1){
	std::cout << "Please enter the first element in the vector: ";
	std::cin >> a;
	if(!std::cin || e <=2 || e >= 5){
	  std::cout << "Invalid vector size! Please re-enter: ";
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
      }
      while(1==1){
	std::cout << "Please enter the second element in the vector: ";
	std::cin >> b;
	if(!std::cin || e <=2 || e >= 5){
	  std::cout << "Invalid vector size! Please re-enter: ";
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
      }
    while(1==1){
        std::cout << "Please enter the third element in the vector: ";
	std::cin >> c;
	if(!std::cin || e <=2 || e >= 5){
	  std::cout << "Invalid vector size! Please re-enter: ";
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
      }
	print( threevector(a,b,c) );
      }
      if(e == 4){
	while(1==1){
	std::cout << "Please enter the first element in the vector: ";
	std::cin >> a;
	if(!std::cin || e <=2 || e >= 5){
	  std::cout << "Invalid vector size! Please re-enter: ";
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
      }
      while(1==1){
	std::cout << "Please enter the second element in the vector: ";
	std::cin >> b;
	if(!std::cin || e <=2 || e >= 5){
	  std::cout << "Invalid vector size! Please re-enter: ";
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
      }
    while(1==1){
        std::cout << "Please enter the third element in the vector: ";
	std::cin >> c;
	if(!std::cin || e <=2 || e >= 5){
	  std::cout << "Invalid vector size! Please re-enter: ";
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
      }
    while(1==1){
	std::cout << "Please enter the fourth element in the vector: ";
	std::cin >> d;
	if(!std::cin){
	  std::cout << "Invalid vector size! Please re-enter: ";
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
    }
	print( fourvector(a,b,c,d) );
    }
    }
    if(input == 8){
      std::cout << "Feature coming soon!" << '\n';
    }
    
  }    

  return 0;
}
