#include<stdio.h>

float volume (float a);
float luas (float b);

int main ()
{
    printf ("============================================================================================\n\n");
    printf ("\t\t\t\t PROGRAM PENGHITUNG VOLUME DAN LUAS PERMUKAAN KUBUS\n\n");
    printf ("============================================================================================");
    float x, y, s;
    int p;
    
    x=volume(s);
    y=luas(s);
    
    printf ("\n[1} Menghitung Volume Kubus\n");
    printf ("[2] Menghitung Luas Permukaan Kubus\n");
    printf ("Pilih: ");
    scanf ("%d", &p);
    
    printf ("\n Masukkan Nilai Sisi Kubus:");
    scanf  ("%f", &s);
    
    if (p==1)
    {   
    printf ("\n\n Volume Kubus adalah: %.3f \n\n", x);
    }
    else if (p==2)
    {
    printf ("\n\n Luas Permukaan Kubus adalah: %.3f \n\n", y);   
    }
    else
    {
    printf ("EROR\n");
    printf ("Pesan EROR: Pilihan yang anda masukkan salah\n");
      
system ("pause");
return 0;    
}

float volume (float a)
{
      float hasil;
      hasil=a*a*a;
      return hasil;
}

float luas (float b)
{
      float hasil;
      hasil=b*b*6;
      return hasil;
}         
