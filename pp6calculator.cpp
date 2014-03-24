#include <iostream>
#include <climits>
#include <cmath>
#include "Day1.hpp"
#include "Day2.hpp"
#include "Day3.hpp"
#include "PP6Math.hpp"
//#include "DayMenuHeader.hpp"

int input;

int main()
{

  while(true){

    std::cout << "Please select a Day (1-3) to access the relevant sub-menu (or 0 to quit): ";
    std::cin >> input;

    if(input == 1) Day1();

    if(input == 2) Day2();

    if(input == 3) Day3();

    if(input == 0){
      break;
    }
    
    if(!std::cin || input > 3){
      std::cout << "Error in input!" << std::endl;
      std::cin.clear();
      std::cin.ignore(INT_MAX, '\n');
      continue;
    }

  }




    

  return 0;
}
