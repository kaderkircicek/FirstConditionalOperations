#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a,b;
    float ort;
    printf("Vize notunuzu giriniz:\n");
    scanf("%d",&a);
    printf("Final notunuzu giriniz:\n");
    scanf("%d",&b);
    ort=((a*0.4)+(b*0.6))/2;
    printf("Ders ortalamaniz:%f'dir.\n",ort);

    if(ort<50)
    {printf("Dersten kaldiniz.");}
    else
    {printf("Dersten gectiniz.");}
    return 0;
}
