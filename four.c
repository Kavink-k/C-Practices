// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,digit,sum=0,cube;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp=num;
    while(temp!=0){
        digit=temp%10;
        cube=digit*digit*digit;
        sum+=cube;
        temp=temp/10;
    }
    if(sum == num){
        printf("The number is an Armstrong number.");}
    else{     
        printf("The number is not an Armstrong number.");}

    return 0;
}