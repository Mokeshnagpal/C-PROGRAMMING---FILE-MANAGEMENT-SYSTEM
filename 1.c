#include <stdlib.h>
#include <stdio.h>
struct st
{
    char name[30];
    int m;
};
int main()
{
    int n=0;
    printf("Input the number of students in the class -\n");
    scanf("%d",&n);
    struct st s[n];
    for(int i=0;i<n;i++)
    {
        printf("Input your name -\n");
        fflush(stdin);
        scanf("%[^\n]",s[i].name);
        fflush(stdin);
        printf("Input your marks -\n");
        scanf("%d",&s[i].m);
        printf("\n\n\n\n");
    }
    FILE *p;
    p=fopen("student.txt","w");
    fprintf(p,"NAME\t\tMARKs OBTAINED\n");
    for(int i=0;i<n;i++)
    {
        fprintf(p,"%s\t\t%d\n",s[i].name,s[i].m);
    }
    fclose(p);
    return 0;
}
