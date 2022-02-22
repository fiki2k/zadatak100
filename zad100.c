// Porgram treba generirat random polje.

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int velicina;
   printf("Unesi velicinu polja:");
   scanf("%d",&velicina);
   int polje[velicina],i;
   for(i=0;i<velicina;i++)
     polje[i]=rand()%100;   //Generira random broj od 0 do 99
   printf("\nElementi polja su:");
   for(i=0;i<velicina;i++)
   {
     printf("\nBroj elementa %d:%d",i+1,polje[i]);
   }
   return 0;
}
