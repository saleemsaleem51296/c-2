# c-2
After swap and Before swap
#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number2:");
    scanf("%d",&num2);
    printf("Before swapping num1=%d,num2=%d\n",num1,num2);
    
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    
      printf("After swapping num1=%d,num2=%d\n",num1,num2);
      
    return 0;
}
