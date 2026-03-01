#include<stdio.h>
int main() {
    int a;
    int res;
    printf("Enter a number: ");
    scanf(" %d", &a);
    res=(a%2!=0) ;
    printf("The %d is odd number: %d\n", a, res);
    return 0;
}
