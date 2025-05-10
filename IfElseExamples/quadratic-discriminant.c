#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

   int a;
   int b;
   int c;
   int delta ;

    printf( "Denklemin x kareli ifadesinin bas kat sayisini giriniz\n" );
    scanf ( "%d", &a);

    printf("Denklemin x ifadesinin bas katsayisisni giriniz\n");
    scanf ( "%d", &b);

    printf("Denklemin sabit terimini giriniz\n");
    scanf ("%d", &c);


    delta = (b*b)-4*(a*c);
    printf ("Denklemin deltasi: %d'dir\n", delta);



    if
    (delta == 0)
    {printf ("Denklemin bir tane real koku vardir.\n");}


    else if
    ( delta > 0)
    {printf("Denklemin iki farkli real koku vardir.\n");}

   else
    {printf ("Denklemin real koku yoktur.");}

    return 0;
}
