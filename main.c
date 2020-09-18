#include <stdio.h>
#include "Calculator.h"

int main()
{
  int choice = 0;
  do{
    printf("1. Addition\n");

    printf("2. Subtraction\n");

    printf("3. Multiplication\n");

    printf("4. Division\n");
    
    printf("5. Positive_or_Negative\n");
    
    printf("6. Max_of_two\n");
    
    printf("7.Factorial\n");
    
    printf("8.Prime\n");
    
    printf("9.Average\n");
    
    printf("10.Swap\n");
    
    printf("11. Exit\n");

    printf("***Enter your choice***: ");

    scanf("%d", &choice);

    if(choice < 1 || choice > 11){

      printf("\n### Invalid Entry | Enter Again ###\n\n");

      continue;
    }
    if(choice == 11){
      break;
    }
    int number1 = 0, number2 = 0;
    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);
    int result = calculator(choice, number1, number2);
    printf("Answer = %d\n", result);
  }while(choice!=11);

}
