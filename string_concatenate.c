#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50],str2[50];
    int i=0,j=0;

    printf("Enter first string : ");
    gets(str1);
    
    printf("Enter second string : ");
    gets(str2);

    i=strlen(str1);

    while(str2[j]!='\0')
    {
        str1[i++]=str2[j++];
    }
    str1[i]='\0';

    printf("\nAfter Concatenation, Strings are :\n");
    puts(str1);

    return 0;

}
