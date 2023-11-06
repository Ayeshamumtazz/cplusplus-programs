// C++ code to print the table of a number up to a certain number.

#include <iostream>

using namespace std;

int main()
{
  int tableOf, upTo;

  cout << "Print table of: ";
  cin >> tableOf;

  cout << "Print table of " << tableOf << " up to: ";
  cin >> upTo;

  for (int i = 1; i <= upTo; i++)
  {
    cout << tableOf << " x " << i << " = " << tableOf * i << endl;
  }

  return 0;
}
