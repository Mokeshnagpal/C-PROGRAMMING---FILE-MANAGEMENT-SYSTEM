#include <stdlib.h>
#include <stdio.h>
struct st
{
    char name[20];
    int p;
    int c;
    int m;
}a[50],b[50];
int main()
{
    int n=0,x=0;

    FILE *f;
    f=fopen("a.txt","wb");
    printf("Input number of students=\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Input the name of student %d -\n",++x);
        fflush(stdin);
        scanf("%[^\n]",a[i].name);
        fflush(stdin);
        printf("Input the marks in physics,chemistry and mathamatics for %s respectively -\n",a[i].name);
        scanf("%d",&a[i].p);
        scanf("%d",&a[i].c);
        scanf("%d",&a[i].m);
    }
    fwrite(a,sizeof(a),1,f);
    fclose(f);
    f=fopen("a.txt","rb");
    fread(b,sizeof(b),1,f);
    for(int i=0;i<n;i++)
    {
        printf("\nName - %s\nMarks in physics - %d\nMarks in chemistry - %d\nMarks in mathamatics - %d\n",b[i].name,b[i].p,b[i].c,b[i].m);
    }
    return 0;
}
