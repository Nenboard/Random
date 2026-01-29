#include <stdlib.h>
#include <stdio.h>

int main()
{
	int var{};
	int seed = (int)&var;
	srand(seed);
	printf("%i\n", rand());
}