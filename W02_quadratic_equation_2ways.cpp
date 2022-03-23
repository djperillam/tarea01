#include <cmath>
#include <iostream>
using namespace std;

double quad1_root1(double a, double b, double c)
{
    double root1 = (-b + std::sqrt(std::pow(b,2)- 4 * a * c))/(2 * a);
    return root1;
}

double quad1_root2(double a,double b, double c)
{
    double root2 = (-b - std::sqrt(std::pow(b,2)- 4 * a * c))/(2 * a);
    return root2;
}

double quad2_root1(double a, double b, double c)
{
    double root1 = -2 * c /(b + std::sqrt(std::pow(b,2) + 4 * a * c));
    return root1;
}

double quad2_root2(double a,double b, double c)
{
    double root2 = -2 * c /(b + std::sqrt(std::pow(b,2) - 4 * a * c));
    return root2;
}


int main(void)
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  double first, second, root1, root2;
  first = 1.0;
  second = 1.0;
  cout << "roots usind the ordinary equation\n";
  cout << "n" << "\t" << "root 1" << "\t" << "root 2" << "\n"; 
  for (int ii = 0; ii <= 10; ii++){
    cout << ii << "\t" << quad1_root1(first,second,std::pow(10,-ii)) << "\t" << quad1_root2(first,second,std::pow(10,-ii)) << "\n";
    }

  cout << "roots usind the alternative equation\n";
  cout << "n" << "\t" << "root 1" << "\t" << "root 2" << "\n"; 
  for (int ii = 0; ii <= 10; ii++){
    cout << ii << "\t" << quad2_root1(first,second,std::pow(10,-ii)) << "\t" << quad2_root2(first,second,std::pow(10,-ii)) << "\n";
    }
  return 0;
}


