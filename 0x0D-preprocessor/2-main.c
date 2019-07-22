#include <stdio.h>
#ifndef FILE
#define FILE
#endif
/**
 * main - Prints file which was compiled from.
 * Return:  0 on succes!.
 */
int  main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
