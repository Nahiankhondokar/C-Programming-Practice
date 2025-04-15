#include<stdio.h>
int main ()
{
   int a;
   scanf("%d", &a);
   int singleDigit = a/1000;
    if(singleDigit % 2 == 0){
        printf("EVEN");
    }
    else {
        printf("ODD");
    }
    
    return 0;
}

// int main ()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if(a % b == 0){
//         printf("Multiples");
//     }else if(b % a == 0) {
//         printf("Multiples");
//     }
//     else {
//         printf("No Multiples");
//     }
    
//     return 0;
// }


// int main ()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if(a < b){
//         printf("Multiples");
//     }else {
//         printf("No Multiples");
//     }
    
//     return 0;
// }


// int main ()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if(a >= b){
//         printf("Yes");
//     }else {
//         printf("No");
//     }
    
//     return 0;
// }

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

// int main ()
// {
//    int n;
//    scanf("%d", &n);
//    int sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//       sum += i;
//    }
//    printf("%d \n", sum);
//    return 0;
// }

// Even or Odd Number
// int main ()
// {
//    int num;
//    scanf("%d", &num);
//       if(num%2 == 0){
//          printf("Even number");
//       }else {
//          printf("odd number");
//       }
//    return 0;
// }


// while loop
// int main ()
// {
//    int i = -10;
//    while(i < 4)
//    {
//       printf("%d", i);
//       i+=2;
//    }
// }


// do while
// int main ()
// {
//    int i = 1;
//    do
//    {
//       printf("%d", i);
//       i++;
//    }while(i > 10);
// }


// simple divisible number
// int main()
// {
//    int num;
//    scanf("%d", &num);
//    for(int i=1; i<num; i++)
//    {
//       if(i%3 == 0 && i%7 == 0){
//          printf("%d \n", i);
//       }
//    }
// }


// simple conditional problem
// int main()
// {
//    int amount;
//    scanf("%d", &amount);
//    if(amount > 1000){
//       if(amount >= 1500){
//          printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");
//       }else {
//          printf("I will buy Punjabi");
//       }
      
//    }else {
//       printf("Bad luck!");
//    }
// }


