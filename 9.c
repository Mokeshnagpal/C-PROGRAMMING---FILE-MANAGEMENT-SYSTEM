#include <stdio.h>
int main()
{
    FILE *p;
    p=fopen("a.txt","r+");

    fseek(p,0,2);
    int n=ftell(p);
    fclose(p);
    printf("Length of file - %d",n);

    return 0;
}
