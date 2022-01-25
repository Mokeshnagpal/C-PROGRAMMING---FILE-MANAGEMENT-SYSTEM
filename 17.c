#include <stdio.h>
int main()
{
    int c=0;
    char x;
    FILE *f;
    f=fopen("a.txt","r");
    while((x=fgetc(f))!=EOF)
    {
        if(x=='\n')
            c++;
    }
    printf("Number of lines - %d",c+1);
    fclose(f);
    return 0;
}
