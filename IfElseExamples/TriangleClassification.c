#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    float a,b,c;
    float cevre;

    printf(" Lutfen ucgenin kenar uzunluklarini giriniz.\n");
    scanf("%f" "%f" "%f",&a,&b,&c);

    cevre=a+b+c;
    printf("ucgenin cevresi %f'dir.\n",cevre);


    if ( a==b && a!=c)
    {printf("ucgen ikizkenardir.");}

   else if ( b==c && b!=a)
    {printf("ucgen ikizkenardir.");}

   else if ( a==c && a!=b)
    {printf("ucgen ikizkenardir.");}

   else if ( a!=b && a!=c )
   {printf("ucgen cesitkenardir.");}

    else if (a==b && b==c)
  {printf("ucgen esitkenardir.");}

    return 0;
}
