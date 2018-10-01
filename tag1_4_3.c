#include <stdio.h>

int main()
{
	int countDownCounter = 10;
  do {
		printf("Counter: %d\n", countDownCounter);
		countDownCounter--;
		
	} while (countDownCounter >= 1);

	printf("Takeoff");
  return 0;
		
}
