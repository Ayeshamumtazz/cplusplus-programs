#include <iostream>

using namespace std;

int calculate_bill(int dinerOne, int dinerTwo, int dinerThree)
{
  int totalBill;
  totalBill = dinerOne + dinerTwo + dinerThree;
  return totalBill;
}

int main()
{
  int bill;

  int rice = 400;
  int chicken = 600;
  int fruit = 800;

  bill = calculate_bill(rice, chicken, fruit);

  cout << " Your total bill is Rs. " << bill;

  return 0;
}
