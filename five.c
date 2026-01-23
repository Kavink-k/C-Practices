#include <stdio.h>

int main(){
    int st,sp,sum=0;
    printf("Enter a number: ");
    scanf("%d %d",&st,&sp);
    for(int i=st;i<=sp;i++){
        if(i%1==0 && i%i==0){
            sum+=1;
        }
    }
    printf(" prime numbers between %d and %d is: %d",st,sp,sum);
}