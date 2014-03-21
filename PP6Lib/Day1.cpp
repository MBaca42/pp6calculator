
#include "Day1.hpp"
#include <iostream>
#include <climits>
#include <cmath>
#include "PP6Math.hpp"


void Day1(){



  while(true){
    std::cout << "Please enter the number for your selection:" << '\n' << "1 - Addition" << '\n' <<  "2 - Subtraction" << '\n' << "3 - Multiplication" << '\n' << "4 - Division" << '\n' << "5 - x-intercept calculation" << '\n' << "6 - Quadratic calculation" << '\n' << "7 - Vector lengths" << '\n' << "8 - Invariant mass of two particles" << '\n' << "0 - Quit" << '\n';
    std::cin >> input; //User selections which function to use (or to quit)

    if(!std::cin || input >= 9 || input < 0){ //Returns error if out of range/doesn't make sense
      std::cout << "Invalid input!" << '\n';
      std::cin.clear();
      std::cin.ignore(INT_MAX, '\n');
      continue;
    }
    if(input == 0){ //Quit option
      break;
    }
  

    if(input >= 1 && input <= 4){
      while( true){
	std::cout << "Enter value for a: "; //User defined values for a and b
	std::cin >> a;
	if(!std::cin){
	  std::cout << "Invalid number." << '\n';
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
      }
      while(true){
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
      while(true){
      std::cout << "For a straight line modelled by y = mx+c, please enter m (the gradient): ";
      std::cin >> a;
        if(!std::cin){
	  std::cout << "Invalid number!" << '\n';
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
        }
	else break;
      }
      while(true){
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
      while(true){
      std::cout << "For a quadratic modelled by y= ax^2 + bx + c, please enter a: ";
      std::cin >> a;
        if(!std::cin){
	  std::cout << "Invalid number!" << '\n';
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
        }
	else break;
      }
      while(true){
      std::cout << "And b: ";
      std::cin >> b;
        if(!std::cin){
	  std::cout << "Invalid number!" << '\n';
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
        }
	else break;
      }
      while(true){
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
      while(true){
	std::cin >> e;
	if(!std::cin || e <=2 || e >= 5){
	  std::cout << "Invalid vector size! Please re-enter: ";
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
      }
      if(e == 3){
	while(true){
	std::cout << "Please enter the first element in the vector: ";
	std::cin >> a;
	if(!std::cin || e <=2 || e >= 5){
	  std::cout << "Invalid vector size! Please re-enter: ";
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
      }
      while(true){
	std::cout << "Please enter the second element in the vector: ";
	std::cin >> b;
	if(!std::cin || e <=2 || e >= 5){
	  std::cout << "Invalid vector size! Please re-enter: ";
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
      }
    while(true){
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
	while(true){
	std::cout << "Please enter the first element in the vector: ";
	std::cin >> a;
	if(!std::cin || e <=2 || e >= 5){
	  std::cout << "Invalid vector size! Please re-enter: ";
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
      }
      while(true){
	std::cout << "Please enter the second element in the vector: ";
	std::cin >> b;
	if(!std::cin || e <=2 || e >= 5){
	  std::cout << "Invalid vector size! Please re-enter: ";
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
      }
    while(true){
        std::cout << "Please enter the third element in the vector: ";
	std::cin >> c;
	if(!std::cin || e <=2 || e >= 5){
	  std::cout << "Invalid vector size! Please re-enter: ";
	  std::cin.clear();
	  std::cin.ignore(INT_MAX, '\n');
	}
	else break;
      }
    while(true){
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
}


