#include <stdio.h>
#include <stdlib.h> // For exit()

int main()
{
	FILE *p,*p1;
	p=fopen("a.txt","w+");
	p1=fopen("b.txt","w+");
    fputs("mokesh nagpal",p);
	int n=0,i=0;
	fseek(p,0,2);
	n=ftell(p);
	printf("%d",n);
	char c[n];
	while(i<n)
    {
        fseek(p,-(i+1),2);
        fputc(fgetc(p),p1);
        i++;
    }
    rewind(p);
    rewind(p1);
    fgets(c,n+1,p1);
    fputs(c,p);
    fclose(p);
    fclose(p1);
    return 0;
}
