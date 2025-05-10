#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Bir sayi giriniz.\n");
    scanf("%d",&a);

    if( a%3==0)

     { if (a%2==0)
       {printf("Sayi hem 2 hem de 3 ile tam bolunebilmektedir.\n");}
       else
       {printf("Sayi sadece 3 ile tam bolunmektedir.\n");}}

    else  if( a%2!=1)
    {printf("Sayi sadece 2 ile tam bolunebilmektedir.\n");}

    else
    {printf("Sayi hem 2 hem de 3 ile tam bolunememektedir.\n");}


    return 0;
}
