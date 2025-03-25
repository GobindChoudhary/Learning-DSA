#include <stdio.h>
#include <math.h>

int main(){
    
    // 1. Write a program to find the Nth term of the Fibonacci series.
            //   int a = -1 , b= 1, c=0;
            //   int n;
            //   scanf("%d",&n);
            //   for (int i = 0; i <= n; i++)
            //   {
            //     c = a + b;
            //     a = b;
            //     b = c;
            //   }
            //   printf("%d",b);

            
    // 2. Write a program to print first N terms of Fibonacci series
            //   int a = -1 , b= 1, c=0;
            //   int n;
            //   scanf("%d",&n);
            //   for (int i = 0; i <= n; i++)
            //   {
            //     c = a + b;
            //     printf(" %d",c);
            //     a = b;
            //     b = c;
            //   }
          

    // 3. Write a program to check whether a given number is there in the Fibonacci series or
    // not.

        // int a = -1 ,b = 1, c = 0,n;
        // printf("Enter a number: ");
        // scanf("%d",&n);
        // for(int  i = 0;; i++){
        //     c = a + b;
        //      if(c == n){
        //         printf("%d belong to fabonacci series",n);
        //      break;
        //     }
        //     if(c > n){
        //         printf("%d not belong to fabonacci series",n);
        //         break;
        //     }
        //     a = b;
        //     b = c;
        //   }
        

    // 4.
    // Write a program to calculate HCF of two numbers
       
        // int a,b,rem;
        // printf("Enter 2 number to find HCF ");
        // scanf("%d%d",&a,&b);
        // if(a>b){
        // int temp = a;
        // a = b;
        // b = temp;
        // }
        // while(rem != 0){
        //     rem = b%a;
        //     if(rem != 0){
        //         b = a;
        //         a = rem;
        //     }
        // }
        // printf("The HCF is %d",a);

    // 2nd method of finding HCF

        //    int a,b ;
        //    scanf("%d%d",&a,&b);
        //     for(int h = a>b?b:a;h>=1;h--){
        //          if(a%h == 0 && b%h==0){
        //             printf("HCF is %d",h);
        //             break;
        //          }
        //     }
        
    
    // 5.
    // Write a program to check whether two given numbers are co-prime numbers or not
        //  int a,b,rem;
        //  printf("Enter 2 number to check co-prime ");
        //  scanf("%d%d",&a,&b);
        //  if(a>b){
        //     int temp =a;
        //     b =a;
        //     a = temp;
        //  }
        //  while(rem != 0){
        //     rem = b%a;
        //     if(rem != 0){
        //         b = a;
        //         a = rem;
        //     }
        //  }
        //  if(a == 1){
        //   printf("co-prime");
        //  }else{
        //     printf("not co-prime");
        //  }

     
    // 6.
    // Write a program to print all Prime numbers under 100
        //  int n=2 ,i ;
        //  while(n != 100){
        //  for( i = 2 ; i <= n;i++){
        //     if(n%i == 0 ){
        //         break;
        //     }
        //  }
        //  if(n == i){
        //     printf("%d is prime number.\n",n);
        //  }
         
        //  n++;
        //  }


    // 7.   
    // Write a program to print all Prime numbers between two given numbers
    //     int num,end ,isPrime = 1;
    //     printf("Enter the stat and end number to check prime number between them:");
    //    scanf("%d\n%d",&num,&end);
    //     while(num != end){
    //     for(int i = 2 ; i <= sqrt(num);i++){
    //     if(num%i == 0 ){
    //         isPrime = 0;
    //     }
    //     }
    //     if(isPrime == 1){
    //     printf("%d is prime number.\n",num);
    //     }
    //     isPrime = 1;
    //     num++;
    //     }


    // 8.
    // Write a program to find next Prime number of a given number
        // int num,isPrime;
        //     printf("Enter the number to check next prime number:");
        //    scanf("%d",&num);
        //    num++;

        //     while(1){
        //     isPrime = 1;
        //     for(int i = 2 ; i <= sqrt(num);i++){
        //     if(num%i == 0 ){
        //         isPrime = 0;
        //     }
        //     }
        //     if(isPrime == 1){
        //     printf("%d is next prime number.\n",num);
        //     break;
        //     }
        //     num++;
        //     }


    // 9.
    // Write a program to check whether a given number is an Armstrong number or not

        //  int num = 153,count=0;
        //  float sum = 0; // we can use float or double for sum as pow() return result in double.
        //  int copy = num;
        //  int copy2 = num;

        //  while(copy2>0){
        //     count = count + 1;
        //     copy2 = copy2/10;
        //  }

        //  while(copy > 0){
        //   sum += pow(copy%10,count);
        //   copy = copy/10;
        //  }
      
        //  if(sum == num ){
        //     printf("%d is Armstrong Number",num);
        //  }else{
        //     printf("%d is not Armstrong Number",num);
        //  }

//  using for loop

        //  int num,count = 0,sum=0 ;
        //  printf("Enter number to check it is Armstrong number or not: ");
        //  scanf("%d",&num);
        //  int num2 = num;
        //  int num3 = num;
        //   while (num2>0)
        //   {
        //     count++;
        //     num2=num2/10;
        //   }

        // for(int i = num;i>0;i = i/10){
        //     int d = i%10;
        //     int p = 1;
        //      for(int j = 0;j<count;j++){
        //         p = p*d;
        //      }
        //      sum = sum + p;
        // }
        
        // if (sum == num3 ){
        //     printf("armstrong");
        // }else{
        //     printf("no armstrong");
        // }


    // 10.
    // Write a program to print all Armstrong numbers under 1000
        // int num = 1;
    
        // while (num < 1000)
        // {
        // int count = 0;
        // float sum = 0; // we can use float or double for sum as pow() return result in double.
        // int copy = num;
        // int copy2 = num;


        // while(copy2>0){
        //     count = count + 1;
        //     copy2 = copy2/10;
        //  }
    
        //  while(copy > 0){
        //   sum += pow(copy%10,count);
        //   copy = copy/10;
        //  }
    
        //  if(sum == num ){
        //     printf("%d is Armstrong Number \n",num);
        //  }
        //  num++;
        // }
    
     
    return 0 ;
}