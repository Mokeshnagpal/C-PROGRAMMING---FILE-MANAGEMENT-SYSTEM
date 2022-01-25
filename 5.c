#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a=0,b=0;
    int c=0;
    FILE *f;
    printf("Input the range -\nLower limit -\n");
    scanf("%d",&a);
    printf("Upper limit -\n");
    scanf("%d",&b);
    for(int i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            f=fopen("e.txt","a+");
            fprintf(f,"%d ",i);
            fclose(f);
        }
        else
        {
            f=fopen("o.txt","a+");
            fprintf(f,"%d ",i);
            fclose(f);
        }
    }
    printf("\n\n");
    f=fopen("e.txt","r");
    printf("Even number are as follows -\n");
    while(fscanf(f,"%d ",&c)!=EOF)
    {
        printf("%d\t",c);
    }
    fclose(f);
    printf("\n");
    f=fopen("o.txt","r");
    printf("Odd number are as follows -\n");
    while(fscanf(f,"%d",&c)!=EOF)
    {
        printf("%d\t",c);
    }
    fclose(f);
    return 0;
}
