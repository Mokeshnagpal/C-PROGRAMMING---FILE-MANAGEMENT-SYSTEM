#include <stdio.h>
int main()
{
    FILE *p;
    p=fopen("a.txt","r");
    fseek(p,0,2);
    int n=ftell(p);
    rewind(p);
    char c[n];
    fgets(c,n+1,p);
    printf("Content of file says \n%s",c);
    fclose(p);
    return 0;
}
