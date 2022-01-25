#include <stdio.h>
#include <string.h>
int main()
{
    FILE *p;
    p=fopen("a.txt","r");
    fseek(p,0,2);
    int n=ftell(p);
    rewind(p);
    char c[n];
    fgets(c,n+1,p);
    strupr(c);
    fclose(p);
    p=fopen("a.txt","w");
    fputs(c,p);
    fclose(p);
    return 0;
}
