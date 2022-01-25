#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0;
    int p=0,m=0,n=0,s=0;
    FILE *f;
    f=fopen("a.txt","w+");
    printf("Input the range -\nLower limit -\n");
    scanf("%d",&a);
    printf("Upper limit -\n");
    scanf("%d",&b);
    for(int i=a;i<=b;i++)
    {
        c=0,d=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                c++;
        }
        m=i,s=0;
        while(m>0)
        {
            n=m%10;
            m=m/10;
            s=s*10+n;
        }
        for(int j=2;j<s;j++)
        {
            if(s%j==0)
                d++;
        }
        if(c==0&&d==0)
        {
            fprintf(f,"%d ",i);
        }
    }
    rewind(f);
    printf("\nNumbers stored are -\n");
    while(fscanf(f,"%d ",&p)!=EOF)
    {
        printf("%d\t",p);
    }
    fclose(f);
    return 0;
}
