#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    int n,i,ci1=-1,ci2=-1,x,y;
    printf("Enter the number of divisions each category has:\n");
    scanf("%d",&n);
    int s=(n*n*n*n)-1;
    char str[s][20];
    printf("Enter the City:\n");
    scanf("%s",str[0]);
    printf("Enter the Suburbs:\n");
    scanf("%s",str[1]);
    scanf("%s",str[2]);
    printf("Enter the Towns:\n");
    for(i=3;i<7;i++)
    {
        scanf("%s",str[i]);
    }
    printf("Enter the Corporations:\n");
    for(i=7;i<s;i++)
    {
        scanf("%s",str[i]);
    }
    printf("Enter the two Corporations to be inspected:\n");
    char c1[20],c2[20];
    scanf("%s",c1);
    scanf("%s",c2);
    for(i=0; i<s; i++)
    {
     if(strcmp(c1,str[i])==0)
        {
          ci1=i+1;
        }
     if(strcmp(c2,str[i])==0)
        {
          ci2=i+1;
        }
    }
    x = ci1/n;
    y = ci2/n;
    if(ci1<0 || ci2<0)
    {
        printf("Invalid Corporation Entered!");
        return 0;
    }
    while (x>1 && y>1)
    {
        x = ci1/n;
        y = ci2/n;
    if (x==y)
    printf("%s, ",str[x-1]);
    n=n*2;
    }
    
    return 0;
}
