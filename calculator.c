#include <stdio.h>
void main()
{   int op,num1,num2;
    printf("Enter the first number \n");
    scanf("%d",&num1);
    printf("Enter the second number \n");
    scanf("%d",&num2);
    printf("Choose operation \n 1 - Addition \n 2 - Subraction \n 3 - Quotient \n 4 - Multiplication \n 5 - Remainder \n");
    scanf("%d",&op);
    switch(op)
    {   case 1: printf("The sum is %d",num1 + num2); break;
        case 2: printf("The difference is %d",num1 - num2); break;
        case 3: printf("The Quotient is %d",num1 / num2); break;
        case 4: printf("The product is %d",num1 * num2); break;
        case 5: printf("The reaminder is %d",num1%num2); break;
        default: prinitf("Invalid Choice");
    }
 
 }
