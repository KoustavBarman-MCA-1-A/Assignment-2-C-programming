#include <stdio.h>
int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
int main() {
    int base, a, result;
      printf("Name: Koustav Barman, Class: MCA_1A, Roll:28\n");    
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d to the power %d = %d", base, a, result);
    return 0;
}

