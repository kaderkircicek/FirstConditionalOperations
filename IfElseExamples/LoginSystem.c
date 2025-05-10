int main()
{
   int a,b;
   printf("Kullanici adinizi giriniz:\n");
   scanf("%d",&a);

   if (a==1234)
   {
       printf("Kullanici adi dogru.\n");
       printf("Lutfen sifrenizi giriniz:\n");
       scanf ("%d",&b);
       if( b==5678)
       {printf("Isleminiz basarili, sisteme girisiniz saglandi.\n");}
       else
       {printf("Sifreniz yanlis lutfen tekrar deneyiniz.\n");}
   }

   else
   {printf("Girdiginiz kullanici adi hatali.Lutfen tekrar deneyiniz.");}
