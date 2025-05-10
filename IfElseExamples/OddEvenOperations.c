int main()
{
   int a,b;
   printf("a degerini giriniz:");
   scanf ("%d",&a);
   printf("b degerini giriniz:");
   scanf ("%d",&b);

   if (a%2==1 && b%2==1)
   {
       int toplam;
       toplam=a+b;
       printf("a+b=%d'dir.",toplam);
   }

   else if (a%2==1 && b%2==0)
  {
    int fark;
    fark= a-b;
    printf( "a-b =%d'dir.",fark);
  }

  else if (a%2==0 && b%2==1)
  {
      int fark2;
      fark2=b-a;
      printf("b-a=%d'dir.",fark2);
  }

  else
    {
        int toplam2;
        toplam2= a+b;
        printf (" a+b= %d'dir.",toplam2);
    }
