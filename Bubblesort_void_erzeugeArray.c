#include <stdio.h>
void erzeugeArray(int *, int);
void zeigeArrayInConsole(int *, int);
void dreiEcksTausch(int *, int);
void bubbleSort(int *, int);

int main()
{
	int anz = 10;
	int z[anz];
	
	void erzeugeArray(z, anz);
	    printf("Array mit %d zufälligen Zahlen:\n ", anz);

 	return 0;
}

void erzeugeArray(int * array, int anz)
{    
    for (int i = 0; i < anz; i++) {
        array[i] = rand()%100;
    }
    
    return 0;
}
