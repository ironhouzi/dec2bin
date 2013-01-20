#include <stdio.h>
#include <stdlib.h>

int convert(int n)
{
    if(n == 0)
	return 0;

    else {

	convert(n / 2);
	printf("%d", n % 2);

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
