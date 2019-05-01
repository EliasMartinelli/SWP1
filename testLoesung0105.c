#include <stdio.h>

void fillArray(int *array, int size, int Untergrenze, int Obergrenze)
{
    srand(time(0));
    
    for(int i = 0; i < size; i++)
    {
        array[i] = (rand() % (Obergrenze - Untergrenze)) + Untergrenze;
    }
}

void printArray(int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(i % 12 == 0)
        {
            printf("\n");
        }
        printf("%d ", array[i]);
    }
}

int min(int *array, int size)
{
    int min = array[0];
    
    for(int i = 1; i < size; i++)
    {
        if(array[i] > min)
        {
            min = array[i];
        }
    }
    return min;
}

int max (int *array, int size)
{
    int max = array[0];
    
    for(int i = 1; i < size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}   

void buildNewArray(int *array, int size, int minimum, int maximum)
{
    for(int i = 0; i < size; i++)
    {
        if(i % 2 == 0)
        {
            array[i] = minimum;
        }
        if(i % 2 != 0)
        {
            array[i] = maximum;
        }
    }
}

int main()
{
    int size = 20;
    int array[size];
    int Untergrenze = 400;
    int Obergrenze = 600;
    int anzSpalten = 12;
    
    fillArray(array, size, Untergrenze, Obergrenze);
    printf("Array Original: \n");
    printArray(array, size);
    
    int minimum = min(array, size);
    int maximum = max(array, size);
    printf("\nArray Umgestellt: \n");
    
    buildNewArray(array, size, minimum, maximum);
    printArray(array, size);
    
    return 0;
}
