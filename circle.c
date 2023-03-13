#include<stdio.h>
int main () {
    float r;
    printf("Enter the radius: ");
    scanf("%f", &r);

    float d;
    d = r*2;
    printf("Diameter of circle is %f\n", d);
    
    float area;
    area = 3.14 * r * r;
    printf("Area of circle is %f", area);

    return 0;
}