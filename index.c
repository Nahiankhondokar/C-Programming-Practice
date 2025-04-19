#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    if(n > 0){
        for(int i = 1; i <= n; i++){
            printf("%d ", i);
        }
    }else {
        for(int i = n; i <= 0; i++){
            printf("%d ", i);
        }
    }
   
    return 0;
}


// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     if(n > 0){
//         for(int i = 1; i <= n; i++){
//             printf("%d. I Want More Assignments\n", i);
//         }
//     }
    
//     return 0;
// }

// int main ()
// {
//      int n;
//      int x;
//      scanf("%d", &n);
//      for(int i=1; i<=n;i++)
//      {
//           scanf("%d", &x);
//      }
//      // scanf("%d", &x);
 
//     return 0;
// }


// int main ()
// {
//      int n;
//      scanf("%d", &n);
//      if(n < 2){
//           printf("-1");
//      }
//      for(int i=1; i<=n;i++)
//      {
//           if(i%2 == 0){
//                printf("%d\n", i);
//           }
//      }
 
//     return 0;
// }



// int main ()
// {
//     int a, b, c, max, min;
//     scanf("%d %d %d", &a, &b, &c);

//      if(a >= b && a >= c){
//           max = a;
//      }else if(b >= a && b >= c){
//           max = b;
//      }else if(c >= a && c >= b){
//           max = c;
//      }

//      if(a <= b && a <= c){
//           min = a;
//      }else if(b <= a && b <= c){
//           min = b;
//      }else if(c <= a && c <= b){
//           min = c;
//      }

//      printf("%d %d", min, max);
//     return 0;
// }


// int main ()
// {
//     int ch;
//     scanf("%c", &ch);
//     if(ch >= '0' && ch <= '9'){
//           printf("IS DIGIT");
//     }else {
//           printf("ALPHA\n");
//           if(ch >= 'a' && ch <= 'z'){
//                printf("IS SMALL");
//           }else {
//                printf("IS CAPITAL");
//           }
//     }

//     return 0;
// }


// int main ()
// {
//     int ch;
//     char convert;
//     scanf("%c", &ch);
//     if(ch <= 90){
//          convert = ch + 32;
//     }else {
//          convert = ch - 32;
//     }
//     printf("%c", convert);

//     return 0;
// }

// int main ()
// {
//     int ch;
//     char convert;
//     scanf("%c", &ch);
//     if(ch >= 'a' && ch <= 'z'){
//          convert = ch - 32;
//     }else {
//          convert = ch + 32;
//     }
//     printf("%c", convert);

//     return 0;
// }

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


