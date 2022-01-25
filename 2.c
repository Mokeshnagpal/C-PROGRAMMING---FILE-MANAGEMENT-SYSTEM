#include <stdio.h>
int main()
{
    FILE *p;
    p=fopen("a.txt","r");
    if(p==NULL)
        printf("File not open successfully");
    else
        printf("File open successfully");
        fclose(p);
    return 0;
}
