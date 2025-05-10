int main()
{
    printf("Hello world!\n");
    int a,b,c;
    printf("Ucgenin a kenarini giriniz:\n");
    scanf("%d",&a);
    printf("Ucgenin b kenarini giriniz:\n");
    scanf("%d",&b);
    printf("Ucgenin c kenarini giriniz:\n");
    scanf("%d",&c);

    if ( b+c<=a)
    {
     printf(" a=%d > (b+c=%d)\n",a,b+c);
     printf ("A kenari ucgen esitsizligine uygun degildir ve verilen ucgenin bir kenari olamaz\n\n\n");
    }
    else if ( c-b>a )
    {
     printf(" a=%d < (c-b=%d)\n", a,c-b);
     printf ("A kenari ucgen esitsizligine uygun degildir ve verilen ucgenin bir kenari olamaz\n\n\n");
    }
     else if ( b-c>a )
    {
     printf("a=%d < (c-b=%d)\n",a,b-c);
     printf ("A kenari ucgen esitsizligine uygun degildir ve verilen ucgenin bir kenari olamaz\n\n\n");
    }
    else
       {printf("A kenari ucgen esitligine uygundur.\n\n\n");}


     if ( a+c<=b)
    {
     printf(" b=%d > (a+c=%d)\n",b,a+c);
     printf ("B kenari ucgen esitsizligine uygun degildir ve verilen ucgenin bir kenari olamaz\n\n\n");
    }
    else if ( c-a>b )
    {
     printf(" b=%d < (c-a=%d)\n", b,c-a);
     printf ("B kenari ucgen esitsizligine uygun degildir ve verilen ucgenin bir kenari olamaz\n\n\n");
    }
     else if ( a-c>b )
    {
     printf("b=%d < (c-a=%d)\n",b,a-c);
     printf ("B kenari ucgen esitsizligine uygun degildir ve verilen ucgenin bir kenari olamaz\n\n\n");
    }
    else
       {printf("B kenari ucgen esitligine uygundur.\n\n\n");}





        if ( a+b<=c)
    {
     printf(" c=%d > (a+b=%d)\n",c,a+b);
     printf ("C kenari ucgen esitsizligine uygun degildir ve verilen ucgenin bir kenari olamaz\n\n\n");
    }
    else if ( b-a>c )
    {
     printf(" c=%d < (b-a=%d)\n", c,b-a);
     printf ("C kenari ucgen esitsizligine uygun degildir ve verilen ucgenin bir kenari olamaz\n\n\n");
    }
     else if ( a-b>c )
    {
     printf("c=%d < (b-a=%d)\n",c,a-b);
     printf ("C kenari ucgen esitsizligine uygun degildir ve verilen ucgenin bir kenari olamaz\n\n\n");
    }
    else
       {printf("C kenari ucgen esitligine uygundur.\n\n\n");}










    return 0;
}
