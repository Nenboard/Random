#include <stdlib.h>

int main()
{
	int var{};
	int seed = (int)&var;
	srand(seed);
	int random = rand();
}
