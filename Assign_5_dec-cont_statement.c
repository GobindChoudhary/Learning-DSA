#include <stdio.h>
#include <math.h>
int main(){
// Assignment-5: Decision Control Statements

// 1. Write a program to check whether a given number is positive or non positive.
//    int a;
//    scanf("%d",&a);
//    if(a > 0  )
//      printf("%d is a positive number",a);
//     else 
//      printf("%d is a non positive number",a);
       
// 2. Write a program to check whether a given number is divisible by 5 or not
        // int a;
        // scanf("%d",&a);
        // if(a % 5 == 0 )
        //   printf("%d is divisible by 5",a);
        //   else
        //   printf("%d is not divisible by 5",a);
// 3. Write a program to check whether a given number is an even number or an odd number.
        // int a;
        // scanf("%d",&a);
        // if(a % 2 == 0 )
        // printf("%d is even number",a);
        // else
        // printf("%d is odd number",a);
// 4. Write a program to check whether a given number is an even number or an odd number without using % operator.
        // int a;
        // scanf("%d",&a);
        // if(a/2 * 2 == a ){
        //         printf("%d is even",a);
        // }else{
        //         printf("%d is odd", a);
        // }

        
// 5. Write a program to check whether the given number is even or odd using a bitwise operator.
        int a;
        scanf("%d",&a);
        if(a & 1 == 0 ){
            printf("%d is even",a);
        }else{
            printf("%d is odd",a);
        }

// 2 method

        // int a ; 
        // scanf("%d",&a);
        // if( ((a >> 1) << 1) == a){
        //     printf("%d is even",a);
        // }else{
        //     printf("%d is odd",a);
        // }

// 6. Write a program to check whether a given number is a three digit number or not.
    // int a,count = 0 ;
    // scanf("%d",&a);
    // while (a>0)
    // { 
    //     count++;
    //     a = a/10;
    // };
    // printf("%d",count);
    // if(count == 3){
    //     printf("%d is a 3 digit number",a);
    // }else{
    //     printf("%d is a not 3 digit number",a);
    // }


// 7. Write a program to print greater between two numbers. Print one number if both are the same.
    //  int a,b;
    //  scanf("%d%d",&a,&b);
    //  if (a == b){
    //     printf("Both are equal and the value is %d",a);
    //  };
    //  if(a > b){
    //     printf("%d is greater then %d",a,b);
    //  }else{
    //     printf("%d is greater then %d",b,a);
    //  }
     
// 8. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

            //  int a,b,c,d,root1,root2;
            //  scanf("%d%d%d",&a,&b,&c);
            //   d = b*b - 4*a*c ;

            //  if (d > 0)
            //  {
            //     root1 = (-b + sqrt(d))/(2*a);
            //     root2 = (-b - sqrt(d))/(2*a);
            //     printf("Roots are distinct and root 1 is %d and root 2 is %d",root1,root2);
            //  }else if(d == 0){
            //     root1 = -b/(2*a);
            //     printf("Root is unique and root  is %d ",root1);
            //  }else{
            //     float realRoot = (-b/(2.0*a));
            //     float imgRoot = sqrt(-d)/(2.0*a);
            //     printf("complex root: %.2f +- %.2fi",realRoot,imgRoot);
            //  }
             


// 9. Write a program to check whether a given year is a leap year or not.

    //  int year;
    //  scanf("%d",&year);
    //  if(year%400 == 0 || (year % 4 == 0 && year % 100 != 0) ){
    //     printf(" %d is a leap year",year);
    //  }else{
    //     printf("%d is not a leap year",year);
    //  }
 
// 10. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

    //   int a,b,c;
    //   scanf("%d\n%d\n%d",&a,&b,&c);
    //   if(a>b){
    //     if(a>c)
    //     printf("%d is greatest number ",a);
    //   }else{
    //     if (b>c){
    //       printf("%d is greatest number",b);
    //     }else{
    //         printf("%d is greatest number",c);
    //     }
    //   }

    return 0;
}