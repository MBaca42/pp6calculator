
#include <iostream>
#include <climits>
#include <cmath>
#include <cstdlib>
#include "PP6Math.hpp"


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
//============================
void quadratic(double& a, double& b, double& c, double result1, double result2){
  if((sqrt((b * b) - (4*a*c))) < 0){
    std::cout << "Error - imaginary number!" << '\n';
      std::cin.clear();
      std::cin.ignore(INT_MAX, '\n');
  }
  else{
    double result1 = quadratic1(a,b,c);
    double result2 = quadratic2(a,b,c);
  }
}
//============================
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
void change(int& a, int& b){//Swaps two variables
  int c = a;
  a = b;
  b = c;
}

double randomvector(){
  int ranvect[4];
  ranvect[1] = rand()%100;
  ranvect[2] = rand()%100;
  ranvect[3] = rand()%100;
  int mass = rand()%100;
  ranvect[0] = 0; //HERE WILL WORK OUT THE ENERGY
  std::cout << ranvect[0] << '\t' << ranvect[1] << '\t' << ranvect[2] << '\t' << ranvect[3] << '\n';


}


Four_Vector Four_Vector::boost_z(Four_Vector beforeboost, double v){
  //Note - v in units of c
  double c = 3E8;
  double gamma = sqrt(1 - pow(v,2));
  Four_Vector afterboost;
  afterboost.x = beforeboost.x;
  afterboost.y = beforeboost.y;
  afterboost.z = gamma*(beforeboost.z - v*c*beforeboost.t);
  afterboost.t = (gamma/c)*(c*beforeboost.t - v*beforeboost.z);

std::cout << afterboost.x << '\t' << afterboost.y << '\t' << afterboost.z << '\t' << afterboost.t << std::endl;

  return afterboost;
}


