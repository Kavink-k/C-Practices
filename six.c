#include <stdio.h>

int main() {
    int a, b, hcf, lcm;
printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find HCF
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    // Find LCM
    lcm = (a * b) / hcf;

    printf("%d", lcm);
    return 0;
}
