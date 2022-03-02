#include<iostream>
#include<stdio.h>
#include<ctype.h>
using namespace std;

// int main()
// {
//   int i=0;
//   char str[]="Cc12++";
//   while (str[i])
//   {
//     if (isalpha(str[i])) printf ("character %c is alphabetic\n",str[i]);
//     else printf ("character %c is not alphabetic\n",str[i]);
//     i++;
//   }
//   return 0;
// }

// int main ()
// {
//   int i;
//   char str[]="Xc3po..@?.";
//   i=0;
//   while (isalnum(str[i])) i++;
//   printf ("The first %d characters are alphanumeric.\n",i);
//   return 0;
// }

int main ()
{
  char c;
  int i=0;
  char str[]='a';
  cout << isblank(str) << endl;
  return 0;
}
