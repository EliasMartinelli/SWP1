#include <stdio.h>

void erzeugeArray (int *, int);

void zeigeArrayInConsole (int *, int);

void dreiEcksTausch (int *, int);

void bubbleSort (int *, int);


    int main () 
    {
      
        int anz = 10;
          
        int z[anz];
          
        erzeugeArray (z, anz);
          
        zeigeArrayInConsole (z, anz);
        
        printf("\nArray mit %d zufälligen Zahlen:\n", anz);
        
        bubbleSort (z, anz);   
        
        printf("\nArray mit %d zufälligen, geordneten Zahlen:\n", anz);
        
        return 0;
    
    }

    void erzeugeArray (int *array, int anz) 
    {
      
        for (int i = 0; i < anz; i++)
        
        { 
            
            array[i] = rand () % 100;
            
        } 
        return 0;

    }

    void zeigeArrayInConsole (int *array, int anz) 
    {
      
        for (int i = 0; i < anz; i++)
        
        {
            
            printf ("%d ", array[i]);
            
        } 
        
        return 0;
    }
    
    void dreiEcksTausch (int *array, int position)
    {
        
        int temp = array[position];
        
        array[position] = array[position -1];
        
        array[position -1] = temp;
        
        return 0;
        
    }
   
    void bubblesort (int *array, int anz)
    {
    
        int i, z, temp;
        
        for (i = 1; i < anz  ; i++) 
        
        {
                
            for (z = 0; z < anz - i ; z++) 
            
            {
                
                if (array[z] > array[z+1]) 
                
                {
                    
                    temp = array[z];
                    
                    array[z] = array[z+1];
                    
                    array[z+1] = temp;
                    
                }
                
            }
            
        }
      
    }
