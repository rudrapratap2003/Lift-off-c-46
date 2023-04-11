#include <stdio.h>
void findfactorial(int num,int *result) {
    int i;
    *result=1;
    for (i=1;i <=num;i++) {
        *result *=i;
    }
}
int main() {
    int num,result;
    printf("enter a number: ");
    scanf("%d",&num);
    findfactorial(num,&result);
    printf("factorial of %d = %d",num,result);
    return 0;
}