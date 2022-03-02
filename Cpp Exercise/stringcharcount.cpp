#include <iostream>
#include <string.h>
using namespace std;
#define MAX_SIZE 100

int main() {
  char mystring[MAX_SIZE];
  int countalpha, countdigit, countspecialchar, i;
  countalpha = countdigit = countspecialchar = i = 0;

  cout << "Enter a string: ";
  cin >> mystring;

  while (mystring[i] != '\0') {
    if((mystring[i]>='a' && mystring[i]<='z') || (mystring[i]>='A' && mystring[i]<='Z')) {
        countalpha++;
    } else if(mystring[i]>='0' && mystring[i]<='9') {
        countdigit++;
    } else {
        countspecialchar++;
    }
    i++;
  }

  cout<<"Total Alphabets: "<<countalpha<<endl;
  cout<<"Total Digits: "<<countdigit<<endl;
  cout<<"Total Special characters: "<<countspecialchar<<endl;
  return 0;
}
