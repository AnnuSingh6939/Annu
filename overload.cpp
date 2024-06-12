#include <iostream>
using namespace std;

int add (int a, int b)
{
  return a+b;
}

double add (double a, double b)
{
  return a+b;
}
 
 int add(int a, int b, int c)
 {
    return a+b+c;
 }

int main ()
{
  cout << add (10,20) << '\n';
  cout << add (1.0,1.5) << '\n';
  cout<< add( 40,30,10)<< '\n';
  return 0;
}