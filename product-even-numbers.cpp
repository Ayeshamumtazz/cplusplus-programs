// C++ code to print the product of even numbers from 1 to 10.

#include <iostream>

using namespace std;

int main()
{
  int product = 1;

  for (int number = 1; (number <= 10); number++)
  {
    if (number % 2 == 0)
    {
      product = product * number;
    }
  }

  cout << "The product of even numbers from 1 to 10 is " << product;

  return 0;
}
