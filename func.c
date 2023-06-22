#include<stdio.h>

int sum(int a, int b); //Function prototype

int main(){
   int a,b;
   printf("Enter first number : ");
   scanf("%d", &a);
   printf("ENter second number : ");
   scanf("%d",&b);

   int s = sum(a, b); //Function call
   printf("sum is : %d \n", s);
   return 0;
}

int sum(int x, int y){ //Function definition 
    return x+y;
}