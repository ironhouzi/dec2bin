#include <stdio.h>
#include <stdlib.h>

int convert(int n)
{
    int x;
    if(n == 0)
  return 0;
    else {
	if(n % 2 != 0)
	    printf("1");
	else
	    printf("0");

	convert(n / 2);
    }
}

int main(int argc, char *argv[])
{
    if(argc != 2)
	return 1;

    convert(atoi(argv[1]));
    printf("\n");

    return 0;
}
