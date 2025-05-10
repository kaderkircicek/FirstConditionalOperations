#include <stdio.h>
#include <stdlib.h>

int main()
{
   float tm ;
   float ek_ucret;
   float toplam_tuketim_miktari ;
   printf("Tuketilen elektrik miktarini giriniz:");
   scanf ("%f", &tm);

   if ( tm <= 50)
   {ek_ucret= (tm*0.2*0.5);
    printf("Ek ucret:%.2f'dir.\n",ek_ucret);
    toplam_tuketim_miktari= (tm*0.5)+(tm*0.2*0.5);
    printf ("Toplam Tuketim Miktari:%.2f'dir",toplam_tuketim_miktari);}


    else if (51<= tm && tm<= 100 )
   {ek_ucret= (tm*0.2*0.75);
    printf("Ek ucret:%.2f'dir.\n",ek_ucret);
    toplam_tuketim_miktari= (tm*0.75)+(tm*0.2*0.75);
    printf ("Toplam Tuketim Miktari:%.2f'dir",toplam_tuketim_miktari);}

    else if (101<= tm )
   { ek_ucret = (tm*0.2*1);
    printf("Ek ucret:%.2f'dir.\n",ek_ucret);
    toplam_tuketim_miktari= (tm*1)+(tm*0.2*1);
    printf ("Toplam Tuketim Miktari:%.2f'dir",toplam_tuketim_miktari);}

    else
    {printf ("kullanim miktariniz hesaplanamiyor.");}

    return 0;
}
