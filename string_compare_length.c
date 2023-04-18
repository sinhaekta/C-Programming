#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50],str2[50];
    int i,j,c;

    printf("Enter first string : ");
    gets(str1);

    printf("Enter second string : ");
    gets(str2);

    for (i=0;str1[i]!='\0';i++)
    {
         i++;
    }
    for (j=0;str2[j]!='\0';j++)
    {
         j++;
    }

    if(i!=j)
    c=0; // return 0 if length of strings is not equal

    else{
    for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
    {
        if(str1[i]==str2[j])
        c=1;
    }
    }

    if(c==0)
    printf("Strings are not equal\n");
    else
    printf("Strings are equal\n");

    return 0;
}

