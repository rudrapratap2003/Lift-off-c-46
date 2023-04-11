#include <stdio.h>
void add(int *a,int *b,int *result) {
    *result=*a + *b;
}
int main() {
    int num1,num2,result;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number: ");
    scanf("%d", &num2);
    add(&num1,&num2,&result);
    printf("Sum = %d",result);
    return 0;
}