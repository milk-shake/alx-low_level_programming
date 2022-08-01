/**
#define _FILE_
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

 * main - main entry point
 * Return: the name of the file it was compiled from, followed
 * by a new line
 
int main(void)
{
        printf("%s\n", _FILE_);
	return (0);
}
*/
#include <stdio.h>

int main ()
{
    printf ("This is line %d of file \"%s\".\n",
            __LINE__, __FILE__);
    return 0;
}
