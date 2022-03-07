#include<stdio.h>
#include<string.h>

int main()
{
    char n[4];
    int a,b;
    printf("Enter a number:");
    scanf("%s",&n[4]);
    a=strlen(a);
    b=n[0];
    n[0]=n[a-1];
    n[a-1]=b;
    printf("%s",n);
    return 0;

}