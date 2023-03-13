#include<stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int sum = 0;
    do {
        sum = sum + n%10;
        n = n/10; 
    } while(n != 0);
    printf("%d", sum);
    return 0;
}