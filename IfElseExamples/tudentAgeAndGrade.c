int main()
{
  int dy,yas;
  printf("Ogrencinin dogum yilini giriniz:\n");
  scanf ("%d",&dy);
  yas=2022-dy;
  printf("Ogrencinin yasi: %d'dir.\n",yas);

  if(yas==7)
  {printf("Bu ogrenci 7 yasindadir ve 1. sinif ogrencisidir.");}
  else if(yas==8)
  {printf("Bu ogrenci 8 yasindadir ve 2. sinif ogrencisidir");}
  else if(yas==9)
  {printf("Bu ogrenci 9 yasindadir ve 3. sinif ogrencisidir");}
  else if(yas==9)
  {printf("Bu ogrenci 10 yasindadir ve 4. sinif ogrencisidir");}
  else
  {printf("Ogrenci ilkokula gitmemektedir.");}
    return 0;