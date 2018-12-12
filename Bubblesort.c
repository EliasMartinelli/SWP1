#include <stdio.h>
void erzeugeArray(int *, int);
void zeigeArrayInConsole(int *, int);
void dreiEcksTausch(int *, int);
void bubbleSort(int *, int);

int main()
{
	int anz = 10;
	int z[anz];
	
	erzeugeArray(z, anz);
	printf("Array mit %d zufälligen Zahlen:\n ", anz);
	zeigeArrayInConsole(z, anz);
    	bubbleSort(z, anz);
    	printf("\nArray mit %d zufälligen Zahlen sortiert:\n: ", anz);
   	zeigeArrayInConsole(z, anz);

 	return 0;
}

void erzeugeArray(int * array, int anz)
{    
    for (int i = 0; i < anz; i++);
    array[i] = rand()%100;
    {
        // array[i] = (1, 2, 3, 4, 5, 6);
    }
    return 0;
}

void zeigeArrayInConsole(int * array, int anz) 
{
    for (int i = 0; i < anz; i++);
        printf("%d ,", array[i]);
        return 0;
}

void dreiEcksTausch(int *, int)
{
    return 0;
}

void bubbleSort(int *, int)
{
    return 0;
}
