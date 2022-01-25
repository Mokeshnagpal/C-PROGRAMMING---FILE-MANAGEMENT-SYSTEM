#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0;
    int p=0,q=0;
    FILE *f;
    f=fopen("a.txt","w+");
    printf("Input the range -\nLower limit -\n");
    scanf("%d",&a);
    printf("Upper limit -\n");
    scanf("%d",&b);
    for(int i=a;i<=b-2;i++)
    {
        d=0,c=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                c++;
        }
        for(int j=2;j<(i+2);j++)
        {
            if((i+2)%j==0)
                d++;
        }
        if(c==0&&d==0)
        {
            fprintf(f,"%d %d ",i,i+2);
        }
    }
    rewind(f);
    printf("\nNumbers stored are -\n");
    while(fscanf(f,"%d %d",&p,&q)!=EOF)
    {
        printf("%d\t%d\n",p,q);
    }
    fclose(f);
    return 0;
}
