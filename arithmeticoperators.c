#include<stdio.h>
int main() {
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    char op;
    printf("Enter operator: ");
    scanf("%c", &op);

    switch(op) {
        case '+' : printf("sum of a and b is %d", a+b);
                   break;
        case '-' : printf("difference of and b is %d", a-b);
                   break;
        case '*' : printf("multiplication of aand b is %d", a*b);
                   break;
        case '/' : printf("Division of a and b is %d", a/b);
                   break;
        case '%' : printf("reminder when a divided by b is %d", a%b);
                   break;                                              
    }
    return 0;
}