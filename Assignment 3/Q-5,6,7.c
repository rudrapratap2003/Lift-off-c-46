/*5. Find the output of the following snippets:
a. char ****k;
i) k is a pointer to a pointer to a pointer to a char
ii) k is a pointer to a pointer to a pointer to a pointer to a char
iii) k is a pointer to a char pointer
iv) k is a pointer to a pointer to a char

ans:(ii)k is a pointer to a pointer to a pointer to a pointer to a char


b. void main()
{
int k = 5;
int *p = &k;
int **m = &p;
**m = 6;
printf("%d\n", k);
}
i) 7
ii) 4
iii) 6
iv) Error

ans:(iii)6


6. Choose the correct statement about structures in C program:
a. Structure elements can be initialized at the time of declaration.
b. Structure members cannot be initialized at the time of declaration
c. Only integer members of structure can be initialized at the time of declaration
d. None of the above

ans:(b)Structure members cannot be initialized at the time of declaration

7. What is the size of a C structure? How the size of a C structure is calculated?

ans:Size of structure is the total bytes of all elements and padding as per requirment.
    Structure is a user friendly datatype in C language which allows us to combine data of different types together. The size of               C structure is the sum of size of individual element and padding required for proper alignment. Size of the elements is determined using size of operator.*/