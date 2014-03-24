
//#include "Day2.hpp"
#include <iostream>
#include <climits>
#include <cmath>
#include "PP6Math.hpp"
//#include "DayMenuHeader.hpp"


void Day2(){

  int input2;

  while(true){
    std::cout << "Please enter the number for your selection:" << '\n' << "1 - Bubble Sort" << '\n' <<  "0 - Quit" << '\n';
    std::cin >> input2; //User selections which function to use (or to quit)

    if(!std::cin || input2 >= 2 || input2 < 0){ //Returns error if out of range/doesn't make sense
      std::cout << "Invalid input!" << '\n';
      std::cin.clear();
      std::cin.ignore(INT_MAX, '\n');
      continue;
    }
    if(input2 == 0){ //Quit option
      break;
    }

    if(input2 == 1){
      int arr[4];

      std::cout << "Input first array value: ";
      std::cin >> arr[0];
      std::cout << "Input second array value: ";
      std::cin >> arr[1];
      std::cout << "Input third array value: ";
      std::cin >> arr[2];
      std::cout << "Input fourth array value: ";
      std::cin >> arr[3];

      bool sorted = false;
      while(!sorted){
	bool swapped = false;
	for(int i = 0; i < 3; i++){
	  if(arr[i] < arr[i+1]){
	    change(arr[i],arr[i+1]);
	    swapped = true;
	  }	  
	  std::cout << "Current status: " << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << '\n';
	}
        sorted = !swapped;
      }
      std::cout << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << '\n';

    }
  }

}


