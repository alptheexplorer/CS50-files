#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Variable declaration
   int num = 10;

   //Pointer declaration
   int *p;

   //Assigning address of num to the pointer p
   p = &num;

   fprintf(stdout,"Address of variable num is: %p", p);
   return 0;
}
