#include <stdio.h>
#include <math.h>

int main(){
    // 1. Write a program to calculate sum of first N natural numbers
        //   int n ,sum = 0;
        //   scanf("%d",&n);
        //   for(int i = 1 ; i <= n;i++){
        //         sum += i;
        //   };
        //   printf("The sum first %d natural number is %d ",n,sum);
    // 2.
    // Write a program to calculate sum of first N even natural numbers
    //    int n , sum = 0;
    //    scanf("%d",&n);
    //    for(int i = 2; i <= n*2;i+=2 ){
    //     sum += i;
    //    }
    //    printf("The sum first %d even natural number is %d ",n,sum);

    // 3.
    // Write a program to calculate sum of first N odd natural numbers
    //    int n , sum = 0;
    //    scanf("%d",&n);
    //    for(int i = 1; i <= n*2;i+=2 ){
    //     sum += i;
    //    }
    //    printf("The sum first %d even natural number is %d ",n,sum);


    // 4.
    // Write a program to calculate sum of squares of first N natural numbers
        //    int n , sum = 0;
        //    scanf("%d",&n);
        //    for(int i = 1; i <= n; i++ ){
        //     sum += i*i;
        //    }
        //    printf("The sum square of first %d natural number is %d ",n,sum);


    // 5.
    // Write a program to calculate sum of cubes of first N natural numbers
        //    int n , sum = 0;
        //    scanf("%d",&n);
        //    for(int i = 1; i <= n; i++ ){
        //     sum += i*i*i;
        //    }
        //    printf("The sum square of first %d natural number is %d ",n,sum);
       
    // 6.
    // Write a program to calculate factorial of a number
        // int n,fact = 1;
        // scanf("%d",&n);
        // for(int i = n; i >= 1; i--){
        //     fact = fact * n;
        // };
        // printf("The factorial of %d is %d",n,fact);
    // 7.
    // Write a program to count digits in a given number
        //  int n ,count= 0;
        //  scanf("%d",&n);
        //  int copy =n;
        //  while(n>0){
        //     count++;
        //     n = n/10;
        //  }
        //  printf("The number of digit in %d id %d",copy,count);
    // 8.
    // Write a program to check whether a given number is a Prime number or not
        // int n ,isprime = 1 ;
        // scanf("%d",&n);
        // if (n==2){
        //     isprime = 0;
        // }
        
        // for(int i = 2; i < sqrt(n);i++){
        //     if(n%i == 0){
        //         isprime  = 0;
        //         break;
        //     }
        // }
        // if (isprime){
        //     printf("%d is prime",n);
        // }else{
        //     printf("%d is not prime",n);
        // }
        
        // to be done...

    // 9.
    // Write a program to calculate LCM of two numbers
        //     int a,b,rem  = 1;
        //     printf("Enter 2 number to check LCM ");
        //     scanf("%d%d",&a,&b);
        //     int product =  a*b;
        //     if(a<b){
        //         int temp = a;
        //         a = b;
        //         b = temp;
        //     }
        //     while(rem != 0){
        //         rem = a%b ;
        //         if(rem != 0){
        //             a = b;
        //             b = rem;
        //         }
        //     }
        // int lcm  = product/b;
        // printf("%d",lcm);
    // 10.
    // Write a program to reverse a given number
            //    int a,reverse = 0 ;
            //    scanf("%d",&a);
            //    int copy = a;
            //    while(a>0){
            //       reverse = reverse *10 + a%10 ;
            //       a = a/10;
            //    }
            //    printf("The reverse of %d is %d",copy,reverse);
      
    return 0;
}