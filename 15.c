#include <stdlib.h>
#include <stdio.h>
int main()
{
    char x,y;
    FILE *f,*g;
    f=fopen("a.txt","r");
    g=fopen("b.txt","r");
    while((x=fgetc(f))!=EOF||(y=fgetc(g))!=EOF)
    {
        if((int)x>(int)y)
        {
            printf("File a.txt is greater");
            exit(0);
        }
        else if((int)x<(int)y)
        {
            printf("File b.txt is greater");
            exit(0);
        }
    }
    if(x==EOF&&y==EOF)
        printf("Both files are equal");
    else if(x==EOF)
        printf("File a.txt is greater");
    else if(y==EOF)
        printf("File b.txt is greater");
    else
        printf("Both files are equal");
    fclose(f);
    fclose(g);
    return 0;
}
