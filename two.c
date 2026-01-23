#include <stdio.h>
int fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

int main(){
  int num,digit,sum=0;
  printf("Enter a number: ");
  scanf("%d",&num);
  int temp=num;
  while(temp!=0){
    digit=temp%10;
    sum+=fact(digit);
    temp=temp/10;
  }
  if(sum==num){
    printf("%d is a Strong number\n",num);
}else{
    printf("%d is not a Strong number\n",num);
}
  return 0;
}