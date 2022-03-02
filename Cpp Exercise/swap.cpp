#include <iostream>
using namespace std;

int main() {
  float A;
  float B;
  float temp;
  cout << "Please enter A value : ";
  cin >> A;
  cout << "Please enter B value : ";
  cin >> B;
  temp = A;
  A = B;
  B = temp;
  cout << "The value of A is " << A << endl;
  cout << "The value of B is " << B << endl;
  return 0;
}
