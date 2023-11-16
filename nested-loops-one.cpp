// C++ code that prints the table of first 5 tables (1 to 5).

#include <iostream>

using namespace std;

int main()
{
  int i, j;

  for (i = 1; i <= 5; i++) // outer loop
  {
    for (j = 1; j <= 10; j++) // inner loop
    {
      cout << i << " x " << j << " = " << i * j << endl;
    }
    cout << endl;
  }
  
  return 0;
}
