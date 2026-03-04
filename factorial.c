#include <stdio.h>

long long factorial(int n){
    if (n==0 || n==1){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    while(number<0){
        printf("Enter a positive number: ");
        scanf("%d", &number);
    }

    printf("Factorial of %d is %lld\n", number, factorial(number));

    return 0;
}