#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
    char a[30],b[30];
    printf("Input a name - \n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    int l=strlen(a);
    FILE *p;
    p=fopen("a.txt","w");
    fputs(a,p);
    fclose(p);
    p=fopen("a.txt","r");
    fgets(b,l+1,p);
    printf("\nName - %s",b);
    fclose(p);
    return 0;
}
