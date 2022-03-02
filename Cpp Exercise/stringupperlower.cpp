#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char str1[30];
  char revstr1[30];
  int i, j, length;
  cout << "Please enter A string : ";
  cin.getline(str1, 30);
  string strupp = strupr(str1);
  string strlow = strlwr(str1);
  cout << "Lower case : " << strlwr(str1) << endl;
  cout << "Upper case : " << strupp << endl;

  j = 0;
  length = strlen(str1);
  for (i=length-1; i>=0; i--) {
    revstr1[j] = str1[i];
    j++;
  }
  // THis is a null variables
  revstr1[j] = '\0';
  cout << revstr1;


  return 0;
}
