#include <stdio.h>
int main() {
    float bs,hra,da,gs;
    scanf("%f",&bs);
    hra=0.2*bs;
    da=0.4*bs;
    gs=hra+da+bs;
    printf("%0.2f your gross salry is : \n",gs);
    return 0;
}