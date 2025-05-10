#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    float a;
    printf("Suyun sicakligini giriniz:\n");
    scanf ("%f",&a);

    if(a<=0)
    {printf("Su sicakligina göre su an buz yani katı haldedir.\n");}

    else if ( a>100)
    {printf("Su sicakligindan dolayi buhar haldedir.\n");}

    else
    {printf("Su sicakligindan dolayi sivi haldedir.");}

    return 0;
}
