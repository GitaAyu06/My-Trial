#include<stdio.h>

float tambah(float a, float b);
float kurang(float a,float b);
float kali(float a, float b);
float bagi(float a, float b);

int main ()
{
    printf ("============================================================================================\n\n");
    printf ("\t\t\t\tPROGRAM KALKULATOR SANGAT SEDERHANA\n\n");
    printf ("============================================================================================");
    float x1,x2,h1,h2,h3,h4;
    printf ("\nMasukkan Bilangan Pertama:");
    scanf ("%f",&x1);
    printf ("Masukkan Bilangan Kedua:");
    scanf ("%f",&x2);
    
    h1 = tambah(x1,x2);
    h2 = kurang(x1,x2);
    h3 = kali(x1,x2);
    h4 = bagi(x1,x2);
    
    printf ("\n\nHasil Penjumlahan= %.3f\n\n", h1);
    printf ("Hasil Pengurangan= %.3f\n\n", h2);
    printf ("Hasil Pengalian= %.3f\n\n", h3);
    printf ("Hasil Pembagian= %.3f\n\n", h4);
    
system ("pause");
return 0;
}
    
float tambah (float a, float b)
{
      float hasil;
      hasil=a+b;
return hasil;
}

float kurang (float a, float b)
{
      float hasil;
      hasil=a-b;
return hasil;
}

float kali (float a, float b)
{
      float hasil;
      hasil=a*b;
return hasil;
}

float bagi (float a, float b)
{
      float hasil;
      hasil=a/b;
return hasil;
}
