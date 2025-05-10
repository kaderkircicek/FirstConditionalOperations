#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
      printf ("Hello world!\n");

   float boy;
   int kilo;
   float boy2;
   float vke ;

   printf ("kilonuzu  giriniz:\n");
   scanf  ("%d",&kilo);
   printf ("boyunuzu giriniz:\n");
   scanf  ("%f",&boy);

   boy2 = boy*boy;
   vke  = kilo/boy2;

   printf ("vucut kitle endeksiniz: %.2f'dir\n", vke);

   if( vke>=0 && vke<= 18.4 )
   {printf ("ideal kilonuzun altindasiniz");}

   else if ( vke>=18.5 && vke<=24.9)
   {printf("kilonuz tamamen normal");}

   else
   { printf ("ideal kilonuzun ustundesiniz");}

    return 0;
}
