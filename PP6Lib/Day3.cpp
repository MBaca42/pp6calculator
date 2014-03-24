
//#include "Day3.hpp"
#include <iostream>
#include <climits>
#include <cmath>
#include "PP6Math.hpp"
//#include "DayMenuHeader.hpp"


void Day3(){

  int input3;

  while(true){
    std::cout << "Please enter the number for your selection:" << '\n' << "1 - Four Vector Lorentz Boost" << '\n' << "0 - Quit" << '\n';
    std::cin >> input3; //User selections which function to use (or to quit)

    if(!std::cin || input3 >= 2 || input3 < 0){ //Returns error if out of range/doesn't make sense
      std::cout << "Invalid input!" << '\n';
      std::cin.clear();
      std::cin.ignore(INT_MAX, '\n');
      continue;
    }
    if(input3 == 0){ //Quit option
      break;
    }

    if(input3 == 1){
      //FOUR VECTOR BOOST CODE
      Four_Vector beforeboost;
      double v;
      std::cout << "Enter x component of four vector: ";
      std::cin >> beforeboost.x;
      std::cout << "Enter y component of four vector: ";
      std::cin >> beforeboost.y;
      std::cout << "Enter z component of four vector: ";
      std::cin >> beforeboost.z;
      std::cout << "Enter t component of four vector: ";
      std::cin >> beforeboost.t;
      std::cout << "Enter velocity (in units of c): ";
      std::cin >> v;
      boost_z(beforeboost,v);
      
    }

  }
}


