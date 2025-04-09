#include<stdio.h>

// int main ()
// {
//    int numb;
//    scanf("%d", &numb);
//    for (int i = 1; i < numb; i++)
//    {
//       printf("%d \n", i);
//    }

//    return 0;
// }

int main ()
{
   int n;
   scanf("%d", &n);
   int sum = 0;
   for (int i = 1; i <= n; i++)
   {
      sum += i;
   }
   printf("%d \n", sum);
   return 0;
}