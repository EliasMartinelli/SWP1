#include <stdio.h>

int main()
{
	int countDownCounter = 10;
	while (countDownCounter >= 1)
	{
		printf("Counter: %i\n", countDownCounter);
		countDownCounter--;
	}

	printf("Takeoff");
	return 0;
}
