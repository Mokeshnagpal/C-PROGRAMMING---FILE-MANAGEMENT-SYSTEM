#include <dirent.h>

#include <stdio.h>



int main(void)

{

    DIR *d;//as directory is by default written as a structure type;

    struct dirent *x;

    d = opendir(".");

    if (d)

    {

        while ((x = readdir(d)) != NULL)

        {

            printf("%s\n", x->d_name);

        }

        closedir(d);

    }

    return(0);

}
