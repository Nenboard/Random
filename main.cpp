#include <stdlib.h>

int main()
{
	__int8 var{};
	int seed = (int)&var;
	srand(seed);
	int random = rand();
}

