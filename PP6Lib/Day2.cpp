
//#include "Day2.hpp"
#include <iostream>
#include <climits>
#include <cmath>
#include <cstring>
#include <vector>
#include "PP6Math.hpp"
//#include "DayMenuHeader.hpp"
#include "FileReader.hpp"


void Day2(){

  int input2;

  while(true){
    std::cout << "Please enter the number for your selection:" << '\n' << "1 - Bubble Sort" << '\n' <<  "2 - Random Energy &Momenta Generator" << '\n' << "3 - Read in data file and process" << '\n' << "0 - Quit" << '\n';
    std::cin >> input2; //User selections which function to use (or to quit)

    if(!std::cin || input2 >= 4 || input2 < 0){ //Returns error if out of range/doesn't make sense
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

    if(input2 == 2){
      int energycount[100];
      int ranvect[4];

      for(int i = 0; i <= 99; i++){
	std::cout << i << '\t';
	randomvector();
	energycount[i] = ranvect[0];
	std::cout << energycount[i] << '\n';
	}
      std::cout << "WARNING - FUNCTION BROKEN. WILL RETURN TO LATER!!!" << '\n';
    }

    if(input2 == 3){
      // Open the file to be read
      FileReader f("observedparticles.dat");

      std::vector<double> p_x_v;
      std::vector<double> p_y_v;
      std::vector<double> p_z_v;
      std::vector<int> particleEvent_v;
      std::vector<std::string> particleName_v;
      std::vector<std::string> DataSource_v;

      // Only process if the file is open/valid
      if (f.isValid()) {
	// Loop until out of lines
	while (f.nextLine()) {
	  // Fields in each line line are treated as whitespace separated
	  // and counted from 1. Fields can be retrieved as one of four main
	  // types

	  // retrieve field 1 of current line as an integer
	  //int a = f.getFieldAsInt(1);

	  // retrieve field 2 as a float
	  //float b = f.getFieldAsFloat(2);

	  // retrieve field 3 as a double
	  //double c = f.getFieldAsDouble(3);

	  // retrieve field 4 as a float
	  //std::string d = f.getFieldAsString(4);

	  int particleEvent = f.getFieldAsInt(1);
	  std::string particleName = f.getFieldAsString(2);
	  double p_x = f.getFieldAsDouble(3);
	  double p_y = f.getFieldAsDouble(4);
	  double p_z = f.getFieldAsDouble(5);
	  std::string DataSource = f.getFieldAsString(6);

	  //NOW THROW ALL THE ABOVE INTO 6 DIFFERENT VECTORS MAYBE?

	  particleEvent_v.push_back(particleEvent);
	  p_x_v.push_back(p_x);
	  p_y_v.push_back(p_y);
	  p_z_v.push_back(p_z);
	  particleName_v.push_back(particleName);
	  DataSource_v.push_back(DataSource);

	  // Check that input is o.k.
	  if (f.inputFailed()){
	    std::cout << "Data is not okay!" << std::endl;

	    break;
	  }

	  std::cout << p_x << '\t' << p_y  << '\t' << p_z  << '\t' << particleEvent << '\t' << particleName  << '\t' << DataSource << '\n';

	  //WOULD NOW NEED TO SCAN THE VECTORS AND FIND THE RELEVANT INFORMATION
	  //SHOUDLN'T BE TOO HARD

	  for(int i=0; i <= p_x_v.size() ;i++){//REPLACE 300 WITH THE VECTOR SIZE
	    //if(strcmp(particleName_v[i],"mu+")==0 || strcmp(particleName_v[i],"mu-")==0){
	    // std::cout << threevector(p_x_v[i], p_y_v[i], p_z_v[i]) << std::endl;
	    // }
	  }


	}
      }
      else{
	std::cout << "Data is not valid!" << std::endl;
      }

    }

  }

}


