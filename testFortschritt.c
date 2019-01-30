#include <stdio.h>
#include <stdlib.h>

void fillArray (int*, int, int, int);
void printArray (int*, int, int);
int getMin (int*, int);
int getMax (int*, int);
void buildNewArray (int*, int, int, int);


int main(){
    
    int anzArrayElemente = 53;
    int unterGrenze = 300, oberGrenze = 500;
    int min, max;
    int anzSpalten = 12;
    int z[anzArrayElemente];
    fillArray(&z[0], anzArrayElemente, unterGrenze, oberGrenze);
    return 0;
}

int getMin (int*x, int anz)
{
    int getMin = array[0];
    
    for(int i = 1; i < anz; i ++)
    {
        if(array[x] < GetMin)
        {
            GetMin = array[x];
        }
    }
}

int getMax (int*x, int anz){
    
}

void fillArray(int*x ,int anz, int uG, int oG)
{
    srand(time(0));
    
    for(int i = 0; i < anz; i ++)
    {
        int rng = rand();
        x[i] = (rand()%(oG-uG))+uG;
    }
}

int printArray (int*x, int anzSpalten){
    
    for(int = 0; i < anzSpalten; i++)
    {
        if(i%12==0) 
        {
            printf("\n");
        }
        printf("%d ", array[i]);
    }    
}

void buildNewArray (int*x int anz, int min, int max){

}
