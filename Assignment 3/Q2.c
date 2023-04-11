#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int freq[256] = {0};
    int i,length;
    printf("enter a string: ");
    fgets(str,MAX_SIZE,stdin);
    length=strlen(str);
    for(i = 0; i < length; i++)
    {
        freq[str[i]]++;
    }
    printf("frequency of each character in the string: \n");
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("'%c' occurs %d times\n", i, freq[i]);
        }
    }
return 0;
}