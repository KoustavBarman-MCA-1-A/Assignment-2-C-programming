#include <stdio.h>
int add(int x, int y){
    return x+y;
}
int multiply(int x, int y){
    return x*y;
}
int divison(int x, int y){
    return x/y;
}
int substract(int x, int y){
    return x-y;
}
int main()
{
    int a,b;
       printf("Name: Koustav Barman, Class: MCA_1A, Roll:28\n");    
   printf("Enter 1st no: ");
   scanf("%d",&a);
   printf("Enter 2nd no: ");
   scanf("%d",&b);
   int c=add(a,b);
   int d=multiply(a,b);
   int e=divison(a,b);
   int f=substract(a,b);
   printf("The sum of two integer is: %d\n",c);
   printf("The multiply of two integer is: %d\n",d);
   printf("The divison of two integer is: %d\n",e);
   printf("The substract of two integer is: %d\n",f);
    return 0;
}