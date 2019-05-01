int main()
{

    int einwurf=0;

    printf("Getraenke Automat | Bitte werfen sie 1 Euro ein: ");

    scanf("%d", &einwurf);

    if(einwurf == 1) 
    {
	
	printf("\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n");
    }
    
    else
    {
	
	printf("\nSie haben kein 1 Euro Stueck eingeworfen.\n");
    }

}
