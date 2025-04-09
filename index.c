#include<stdio.h>

int main ()
{
   int numb;
   scanf("%d", &numb);
   for (int i = 1; i < numb; i++)
   {
      printf("%d \n", i);
   }

   return 0;
}