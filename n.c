#include <stdio.h>
#include <string.h>
int main(){

    int number;
    char choice[10];
  do{
          printf("Enter any Number: ");
    scanf("%d", &number);
    if(number % 2 == 0){
        printf("%d Even Number!",number);
    }else{
        printf("%d Odd number\n",number);
    }

    printf("Do you want to check another number? (Y/N): ");
    scanf("%s", choice);



    }while(strcmp(choice, "y") == 0);
    printf("Thank you for using the program!");
    

    return 0;



}


  