#include<stdio.h>
int main(){
    int num1,num2,result;
    char choice;

    printf("Enter 1 Value:");
    scanf("%d",&num1);
    printf("Enter 2 Value:");
    scanf("%d",&num2);

    printf("Enter Operation to Perfrom('+','-','*','/','%') :");
    scanf(" %c",&choice);


    switch (choice){
    case '+':
     result =num1 + num2;
     printf("Sum of %d & %d : %d",num1,num2,result);
     break;

    case '-':
     result = num1 - num2;
     printf("Subtraction of %d & %d : %d",num1,num2,result);
    break;
    
    case '*':
     result = num1 * num2;
     printf("Multiplication of %d & %d : %d",num1,num2,result);
    break;

    case '/':
     if(num2 != 0){
     result = num1 / num2;
     printf("Division of %d & %d : %d",num1,num2,result);
     } else {
        printf("Error !!! Division by zero!!");
     }
    break;

    case '%':
     if(num2 != 0){
     result = num1 % num2;
     printf("Modulo of %d & %d : %d",num1,num2,result);
     } else {
        printf("Error !!! Modulo by zero!!");
     }
    break;
     
    default:
    printf("Invalid Operator!!!");
        break;
    }
    
    return 0;
}