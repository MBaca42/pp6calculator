#ifndef PP6CALCULATOR_PP6MATH_HH
#define PP6CALCULATOR_PP6MATH_HH

struct Four_Vector{
  double x;
  double y;
  double z;
  double t;
};

double addition(double a, double b);
double subtraction(double a, double b);
double multiply(double a, double b);
double division(double a, double b);
double xintercept(double a, double b);
double quadratic1(double a, double b, double c);
double quadratic2(double a, double b, double c);
void quadratic(double& a, double& b, double& c, double result1, double result2);
double threevector(double a, double b, double c);
double fourvector(double a, double b, double c, double d);
double print(double c);
void change(int& a, int& b);
Four_Vector boost_z(Four_Vector beforeboost, double v);
//struct FourVector(double, double, double, double);



#endif
