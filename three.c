#include <stdio.h>

int main(){
    int number,rev=0;
    printf("Enter number: ");
    scanf("%d", &number);
    int temp = number;
    while(temp){
        int digit = temp % 10;
        rev = rev * 10 + digit ;
        temp /= 10;
    }
    printf("Reversed Number: %d\n", rev);
   

    return 0;
}