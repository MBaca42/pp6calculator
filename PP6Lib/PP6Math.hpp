
#ifndef PP6CALCULATOR_PP6MATH_HH
#define PP6CALCULATOR_PP6MATH_HH

class Four_Vector{
 public:
  static Four_Vector boost_z(Four_Vector beforeboost, double v);
  double x;
  double y;
  double z;
  double t;
};

enum FourVectorType{
  UNDEFINED_TYPE,
  TIMELIKE,
  SPACELIKE,
  LIGHTLIKE
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
double randomvector();
//Four_Vector boost_z(Four_Vector beforeboost, double v);



#endif
