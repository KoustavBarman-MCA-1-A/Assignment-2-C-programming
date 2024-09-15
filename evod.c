#include <stdio.h>
int main() {
    int num;
        printf("Name: Koustav Barman, Class: MCA_1A, Roll:28\n");    
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}