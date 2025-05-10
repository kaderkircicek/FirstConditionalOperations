#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int fiyat;
    float ind1=0.1;
    float ind2=0.15;
    float ind3=0.25;

    printf("Lutfen urunun fiyatini giriniz:\n");
    scanf ("%d", &fiyat);

    if( fiyat>0 && fiyat<100 )
    { printf (" urunun indirimli satis miktari:%f'dir", fiyat-(fiyat*ind1));}

     else if ( fiyat>=100 && fiyat<500)
     { printf("urunun indirimli fiyati:%.2f'dir", fiyat-(fiyat*ind2));}

     else
     {printf("urunun indirimli fiyati: %.2f'dir", fiyat-(fiyat*ind3));}

    return 0;
}
