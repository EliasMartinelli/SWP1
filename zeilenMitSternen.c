#include <stdio.h>

int main (){

int i, j;

for(i=0; i<10; i++) {
	printf("\nZeile %2d: ", i+1);

	for(j=0; j<=i; j++) {
		printf("*");
	}
}

printf("\n");

return 0;

}
