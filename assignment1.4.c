#include<stdio.h>
 int main()
 {
     int num1, num2, operation;
      printf("Enter 1st number:","\n");
      scanf("%d",&num1);
      printf("Enter 2nd number:","\n");
      scanf("%d", &num2);
      printf("Which operation do you want to perform\n, 1.addition\n, 2.subtraction\n,3.multiplication, 4.division\n");
      printf("Enter the operation: ");
      scanf("%d", &operation);
      switch (operation)
      {
           case 1:
           printf("%d+%d %d\n", num1, num2, num1+num2);
           break;
           case 2:
           printf("%d-%d %d\n", num1, num2, num1 - num2);
           break;
           case 3:
           printf("%d*%d = %d\n", num1, num2, num1*num2);
           break;
           case 4:
           printf("%d/%d = %d\n", num1, num2, num1/num2); 
           break;
           }
            return 0;
 }