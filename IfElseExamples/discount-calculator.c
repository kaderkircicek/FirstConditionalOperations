#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a,b,c;
   printf("Almak istediginiz ilk urunun fiyatini giriniz:");
   scanf("%f",&a);
   printf("Almak istediginiz ikinci urunun fiyatini giriniz:");
   scanf("%f",&b);
   c=a+b;
   printf("Toplam tutar:%f'dir.\n",c);

   if (c>200)
   {  c= a+(b-(b*1/4));
    printf("Yapilan indirim sonucu odemeniz gereken tutar:%f'dir.",c); }
   else
   {printf("Toplam tutar:%f'dir.",c);}

  return 0;
}
